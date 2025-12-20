# 🤝 贡献指南 (Contributing Guide)

感谢你愿意为 SCU SE Course Resources 贡献力量！
作为一个软件工程资料库，我们希望维护一个 **高质量、结构化、工程化** 的开源仓库。

为了保证仓库的整洁和可持续维护，请在提交 PR (Pull Request) 前仔细阅读以下指南。

---

## 🚀 贡献流程 (Workflow)

我们需要你遵循标准的 GitHub 开源协作流程 (`Fork` -> `Branch` -> `Commit` -> `PR`)：

1.  **Fork 本仓库**
    点击右上角的 `Fork` 按钮，将仓库复制到你的 GitHub 账户下。

2.  **Clone 到本地**
    ```bash
    git clone https://github.com/<YourUsername>/SCU-SE-Course-Resources.git
    cd SCU-SE-Course-Resources
    ```

3.  **创建分支 (Create Branch)**
    **不要**直接在 `main` 分支上修改。请根据你的贡献类型创建一个新分支：
    ```bash
    # 例如，你要上传操作系统课程的资料
    git checkout -b upload/OS-2024-Resources
    ```

4.  **添加资料 (Add Files)**
    将你的资料放入对应的目录中。
    > ⚠️ **注意**：请务必阅读 [📂 文件命名规范](./NAMING_CONVENTION.md)，不符合命名规范的 PR 可能会被驳回。

5.  **提交更改 (Commit)**
    我们推荐使用语义化的 Commit Message：
    ```bash
    # feat: 新增资源 | docs: 文档修改 | fix: 修正错误
    git commit -m "feat: add 2024 OS Lab1 report and code"
    ```

6.  **推送分支 (Push)**
    ```bash
    git push origin upload/OS-2024-Resources
    ```

7.  **提交 PR (Pull Request)**
    回到 GitHub 页面，点击 `Compare & pull request`。
    -   在 PR 描述中简要说明你上传了什么资料。
    -   确认你已经进行了**脱敏处理**（见下文）。

---

## 🛡️ 隐私与版权 (Privacy & License)

### 1. 隐私脱敏 (Desensitization)
在上传任何作业、实验报告或文档前，请**务必**删除以下敏感信息：
-   ❌ 学生姓名
-   ❌ 学号
-   ❌ 手机号/微信号/邮箱
-   ❌ 任课老师的非公开联系方式

> **Tip**: 对于 PDF 文件，可以使用 PDF 编辑器打码；对于代码源文件，请检查文件头的注释。

### 2. 版权确认 (Copyright)
-   **原创内容**: 确保是你自己撰写的笔记、代码或报告。
-   **授权内容**: 如果是搬运他人的资料，必须获得原作者授权，并在 PR 中说明。
-   **严禁上传**: 严禁上传**任何老师的任何课件（PPT、教材等）**，以保护老师们的知识版权。同时也严禁上传未公开的题库（如有版权争议）。

---

## ❓ 贡献什么？

我们需要以下类型的资源（按优先级排序）：
1.  **Project Source Code**: 课程大作业的完整源码（含 Readme 运行说明最佳）。
2.  **Lab Reports**: 实验报告（PDF 格式为佳，Word 格式容易乱码）。
3.  **Review Notes**: 个人整理的期末复习笔记、思维导图。
4.  **Past Exams**: 历年真题回忆版（请标注年份）。

---

**Code Less, Create More.** 再次感谢你的贡献！
