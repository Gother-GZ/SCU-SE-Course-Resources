#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

#define COMMAND_LINE 13
#define RESOURCE_NUM 3
#define THREAD_NUM 5

typedef struct
{
	char instruct;
	unsigned int threadId;
	unsigned int r[RESOURCE_NUM];
} command;

typedef struct
{
	unsigned int resourceVector[RESOURCE_NUM] = {10, 5, 7};                                                       // 系统总资源表
	unsigned int availableVector[RESOURCE_NUM] = {10, 5, 7};                                                      // 初始状态系统可以资源表
	unsigned int claimMatrix[THREAD_NUM][RESOURCE_NUM] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3}}; // 各个线程总需求表
	unsigned int allocationMatrix[THREAD_NUM][RESOURCE_NUM] = {0};                                                // 各个线程已分配资源表
} systemstate;

// Function Declaration
int readCommands(FILE*fp,command*pcmd);
int resourceAllocateAlgorithm(command cmd);
int isSafe(systemstate state);
int releaseResourceCommand(command cmd);

void printCurrentState(const systemstate state);

// Global Variables
systemstate currentState,newState;

int main()
{
	command cmdList[COMMAND_LINE];
	int i = 0;
	
	FILE *fp = fopen("commands.txt", "r");
	if (fp == NULL)
	{
		printf("Fail to read commands.txt\n");
		exit(EXIT_FAILURE);
	}
	readCommands(fp,cmdList);
	fclose(fp);

	for (i = 0; i < COMMAND_LINE; i++)
	{
		switch (cmdList[i].instruct)
		{
		case 'Q':
			resourceAllocateAlgorithm(cmdList[i]);
			break;
		case 'R':
			releaseResourceCommand(cmdList[i]);
			break;
		case 'P':
			printCurrentState(currentState);
			break;
		default:
			printf("ERROR\n");
		}
	}
	return 0;
}

int readCommands(FILE *fp, command *pcmd)
{
    int i = 0;
    while (i < COMMAND_LINE && fscanf(fp, " %c %u %u %u %u", 
                                      &pcmd[i].instruct, 
                                      &pcmd[i].threadId, 
                                      &pcmd[i].r[0], 
                                      &pcmd[i].r[1], 
                                      &pcmd[i].r[2]) == 5)
    {
        i++;
    }
    return i;
}


void printCurrentState(const systemstate state)
{
	int i, j;
	printf("\n System total resource ||  Available resource \n");
	for (i = 0; i < RESOURCE_NUM; i++)
	{
		printf("%7u", state.resourceVector[i]);
	}
	printf("  ||");
	for (i = 0; i < RESOURCE_NUM; i++)
		printf("%7u", state.availableVector[i]);
	
	printf("\nTHREAD ID ||  MAXIMUM || ALLOCATION || NEED       \n");
	for (i = 0; i < THREAD_NUM; i++)
	{
		printf("%-7u\t", i);
		printf("  ||");
		for (j = 0; j < RESOURCE_NUM; j++)
		{
			printf("%3u", state.claimMatrix[i][j]);
		}
		printf(" || ");
		for (j = 0; j < RESOURCE_NUM; j++)
		{
			printf("%3u", state.allocationMatrix[i][j]);
		}
		printf("  || ");
		for (j = 0; j < RESOURCE_NUM; j++)
		{
			printf("%3u", state.claimMatrix[i][j] - state.allocationMatrix[i][j]);
		}
		printf("\n");
	}
}

int releaseResourceCommand(command cmd)
{
	int i;
	for (i = 0; i < RESOURCE_NUM; i++)
	{
		if (cmd.r[i] > currentState.allocationMatrix[cmd.threadId][i])
		{
			printf("thread %d releases resource %d %d %d was denied, more than allocated.\n",
				cmd.threadId, cmd.r[0], cmd.r[1], cmd.r[2]);
			return -1;
		}
	}
	//资源释放
	for(i=0;i<RESOURCE_NUM;i++)
	{
		currentState.availableVector[i]+=cmd.r[i];
		currentState.allocationMatrix[cmd.threadId][i]-=cmd.r[i];
	}
	printf("The thread %d 's release for resource [%d,%d,%d] has been completed. \n", cmd.threadId, cmd.r[0], cmd.r[1], cmd.r[2]);
	return 0;
}

int resourceAllocateAlgorithm(command cmd)
{
	int i=0;
	unsigned int threadid=cmd.threadId;
	
	// 检查是否超过声明的最大需求
	for (i=0;i<RESOURCE_NUM;i++)
		if(currentState.allocationMatrix[threadid][i]+cmd.r[i]>currentState.claimMatrix[threadid][i])
		{
			printf("thread %d requests resource %d %d %d was denied, more than claimed.\n",
				threadid, cmd.r[0], cmd.r[1], cmd.r[2]);
			return -1;
		}
	else if(cmd.r[i]>currentState.availableVector[i])
	{
		printf("thread %d requests resource %d %d %d was denied, more than available.\n",
			threadid, cmd.r[0], cmd.r[1], cmd.r[2]);
		return -1;
	}
	//模拟分配
	newState=currentState;
	for (i=0;i<RESOURCE_NUM;i++)
	{
		newState.allocationMatrix[threadid][i] = currentState.allocationMatrix[threadid][i] + cmd.r[i];
		newState.availableVector[i]-=cmd.r[i];
	}
	
	if(isSafe(newState))
	{
		printf("The thread %d 's request for resource [%d,%d,%d] has been completed. \n", threadid, cmd.r[0], cmd.r[1], cmd.r[2]);
		currentState=newState;
		return 0;
	}
	else 
	{
		printf("The thread %d 's request for resource [%d,%d,%d] has been denied. It's unsafe.\n", threadid, cmd.r[0], cmd.r[1], cmd.r[2]);
		return -1;
	}
}

int isSafe(systemstate state)
{
	int possible=1;
	int restThreadNum=THREAD_NUM;
	int i=0,j=0;
	unsigned int currentAvailable[RESOURCE_NUM];
	int threads[THREAD_NUM]={1,1,1,1,1};
	memcpy(currentAvailable,state.availableVector,sizeof(unsigned int)*RESOURCE_NUM);
	
	while(restThreadNum>0)
	{
		int found=0;
		for(i=0;i<THREAD_NUM;i++)
		{
			if (threads[i])
			{
				for(j=0;j<RESOURCE_NUM;j++)
				{
					if (state.claimMatrix[i][j]-state.allocationMatrix[i][j]>currentAvailable[j])
						break;
				}
				
				if (j==RESOURCE_NUM)
				{
					threads[i]=0;
					restThreadNum--;
					for(j=0;j<RESOURCE_NUM;j++)
						currentAvailable[j]+=state.allocationMatrix[i][j];
					found=1;
					break;
				}
			}
		}
		if(!found)
		{
			possible=0;
			break;
		}
	}
	return possible;
}
