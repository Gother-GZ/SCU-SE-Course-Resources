# 🦄 SCU SE Space | 川大软院课程资源共享计划

> **Code Less, Create More.**
> 聚沙成塔，薪火相传。这不仅仅是一个资料库，它是每一位川大软院人（SCU SEers）的数字知识库。

![License](https://img.shields.io/badge/license-CC--BY--NC--SA%204.0-green.svg) ![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg) ![SCU-SE](https://img.shields.io/badge/SCU-Software%20Engineering-blue.svg)

---

## 📖 关于本项目 (About)

欢迎来到 **SCU Software Engineering Course Resources**。

软件工程（Software Engineering）是一门关于"构建"的学科。每一门课程——无论是高数线代的基石，还是 Java/C++ 的利刃，亦或是系统架构的蓝图——都是构建我们职业生涯大厦的材料。

与传统的"试卷库"不同，本项目更注重 **工程实践** 与 **知识体系的传承**。我们致力于收集整理四川大学软件学院本科阶段的核心课程资料，不仅包括复习笔记和历年真题，更特别收录了大量高质量的 **课程项目源码 (Source Code)**、**实验报告 (Lab Reports)** 以及 **项目文档 (Docs)**，希望能帮助大家在繁重的课业中更高效地掌握核心技术栈。

**Our Philosophy:** Don't Repeat Yourself (DRY). 前人踩过的坑，后人不必再踩；前人造好的轮子，后人可以装上跑得更快。

## 🌟 核心特色 (Highlights)

本项目谢绝千篇一律的堆砌，我们针对软件学院的培养方案进行了特色的架构设计：

-   **🎯 选修课"技能树"分类 (Track-Based Structure)**
    不同于传统的按学期分类，我们将选修课程按照 **专业方向 (Specialization Tracks)** 进行了重组：
    -   `人工智能与数据分析`：数据挖掘、机器学习...
    -   `移动和Web应用开发`：前端技术、移动应用...
    -   `数字媒体及图像处理`：图形学、游戏设计...
    -   `软件工程通用`：项目管理、测试...
    
    这样的设计旨在让你更清晰地依照自己的 **职业规划 (Career Path)** 查找资料，而非仅仅是为了应付考试。

-   **🛠️ 强调工程实战**
    我们深知 SEER 们的痛点在于大作业和项目。因此，本仓库特别标注并整理了各科目的 **Project** 资源，提供从需求分析 -> 概要设计 -> 编码实现 -> 测试文档的全流程参考。

## 🗂 目录导航 (Architecture)

本仓库的文件组织逻辑如下，清晰明了，方便索引：

```text
SCU-SE-Course-Resources/
├── 📂 必修 (Compulsory)          # 主线任务：打好基础，通关必修
│   ├── 01_大一上_Year1_Sem1      # 启程：高等数学、导论...
│   ├── 02_大一下_Year1_Sem2      # 探索：离散数学、C语言...
│   ├── 03_大二上_Year2_Sem1      # 进阶：数据结构、Java...
│   └── 04_大二下_Year2_Sem2      # 核心：操作系统、数据库...
│
└── 📂 选修 (Elective)            # 支线任务：点亮技能树
    ├── 🤖 人工智能与数据分析方向   # AI Track
    ├── 🎨 数字媒体及图像处理方向   # Media Track
    ├── 📱 移动和Web应用开发方向    # Web/Mobile Track
    └── ⚙️ 软件工程通用方向         # General SE Track
```

> **Tip**: 善用 `Ctrl + F` (Windows) 或 `Cmd + F` (Mac) 在页面搜索你的课程名称。

## 🚀 快速开始 (Usage)

我们推荐使用 Git 进行版本管理，这也是软件工程师的基本素养：

1.  **Clone 本项目**
    ```bash
    git clone https://github.com/YourUsername/SCU-SE-Course-Resources.git
    ```
    *(如果是下载 Zip 包，请记得定期回来 Check Updates)*

2.  **查找资料**
    进入对应目录查看。文件名通常包含了 `年份_类型_说明`，例如 `2023_LabReport_JavaSpaceWar`。

3.  **Star & Watch**
    如果你觉得本项目对你有帮助，请点击右上角的 **Star** 🌟，这不仅是对贡献者的感谢，也能让你第一时间获取更新推送。

## 🤝 如何贡献 (Contribution)

开源精神是软件工程的灵魂。我们非常欢迎你提交 Pull Request (PR) 或 Issue。

为了帮助大家更好地参与贡献，我们整理了详细的指南：

-   📘 **[贡献指南 (Contributing Guide)](./assets/CONTRIBUTING.md)**: 关于 Fork、PR 流程、Git 规范及注意事项。
-   🏷️ **[文件命名规范 (Naming Convention)](./assets/NAMING_CONVENTION.md)**: 上传文件前请务必阅读，良好的命名是工程质量的第一步。

**简要 Checklist**:
1.  **Commit Message**: 请语义化你的提交，例如 `feat: add OS 2024 final exam`.
2.  **脱敏**: 务必**移除**个人隐私信息（姓名、学号）。
3.  **版权**: 确保资料为原创或已获授权。**严禁上传任何老师的课件**，保护知识版权。

## ⚠️ 免责声明 & 协议 (Disclaimer)

1.  **学术诚信 (Academic Integrity)**: 
    -   严禁直接抄袭（Plagiarism）本仓库中的代码或文档用于作业/考试提交。
    -   所有的代码和文档仅供 **学习参考 (Reference Only)**。请理解代码背后的逻辑，写出属于你自己的 Implementation。
    -   因直接抄袭产生的任何后果，本项目及贡献者概不负责。

2.  **License**:
    -   本仓库资料遵循 [CC-BY-NC-SA 4.0](http://creativecommons.org/licenses/by-nc-sa/4.0/) 协议。
    -   你可以自由分享、修改，但必须署名、非商业使用，且以相同协议共享。

---

**Show me the code, and let's change the world.**
Designed with ❤️ by SCU SE Students.
