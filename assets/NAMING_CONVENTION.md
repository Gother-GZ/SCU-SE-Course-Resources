# 📂 文件命名规范 (Naming Convention)

为了保持仓库的整洁和可搜索性，所有上传的文件必须遵循以下命名规范。
**Software Engineering 讲究规范，文件名也是代码的一部分。**

---

## 1. 基本格式

推荐使用 **下划线命名法 (Snake Case)** 或 **连字符 (Kebab Case)**，避免使用空格和中文特殊符号。

```text
年份_课程简称_类型_描述.扩展名
```

### 字段说明
-   **年份**: 资料对应的**课程修读年份**（而非上传年份），例如 `2023`。
-   **课程简称**: 简短易懂的英文或拼音缩写，例如 `OS`(操作系统), `Java`, `DataStruct`。
-   **类型**: 
    -   `Lab`: 实验报告/代码
    -   `Proj`: 课程大作业/项目
    -   `Note`: 复习笔记
    -   `Exam`: 试卷/真题

-   **描述**: 对文件的补充说明（可选），例如 `Midterm`, `Final`, `GameDemo`。

---

## 2. 示例 (Examples)

### 🖥️ 实验报告 (Lab Reports)
-   ✅ `2023_OS_Lab1_Process_Management.pdf`
-   ✅ `2024_DataStructure_Lab_Report_All.zip`
-   ❌ `实验报告.doc` (不明所以)
-   ❌ `张三_操作系统实验一.pdf` (包含个人隐私)

### 💻 课程设计/大作业 (Projects)
-   ✅ `2023_Java_Proj_SpaceWar_SourceCode.zip`
-   ✅ `2022_SoftwareEng_Proj_LibrarySystem_Docs.pdf`

### 📝 复习资料 (Notes & Exams)
-   ✅ `2021_LinearAlgebra_Note_FinalReview.md`
-   ✅ `2023_Database_Exam_Midterm_Recall.pdf`

---

## 3. 目录结构建议

如果你上传的是一个完整的工程项目（例如 Java 大作业），建议直接打包成 `.zip`，或者创建一个以规范命名的文件夹：

```text
SCU-SE-Course-Resources/必修/03_大二上/Java程序设计/
├── 2023_Java_Proj_TankWar_Zhansan/   <-- 文件夹
│   ├── src/
│   ├── doc/
│   └── README.md
```

遵循规范能让其他同学更快速地通过 `Ctrl+P` 或搜索功能找到你的资料！
