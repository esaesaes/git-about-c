# git-about-c

some things about my university




## 目录结构

```
before zero/
├── 51单片机/                     ← 原 D:\keil5\project prictice
│   ├── 2-1点亮一个led/            Keil uVision 工程
│   ├── 2-2LED闪烁/
│   ├── 2-3LED流水灯/
│   ├── 2-4LED流水灯Plus/
│   ├── 3-1独立按键控制LED亮灭/
│   ├── 3-2独立按键控制LED状态/
│   ├── 3-3独立按键控制LED显示二进制/
│   ├── 3-4独立按键控制/
│   ├── 4-1静态数码管显示/
│   ├── 4-2动态数码管显示/
│   ├── 5-1模块化编程/
│   ├── 5-2LCD1602/
│   ├── 6-1矩阵键盘/
│   └── 6-2矩阵键盘密码锁/
└── c language practice/
    ├── devc++练习/               ← 原 D:\devc++\新建文件夹（C++ 练习：翁恺课程、洛谷、电协）
    └── vscode-C-Code/            ← 原 D:\VScode\C-Code（实验、超级玛丽、practice 练习）
```

## 编译运行

**单片机（Keil）**：用 Keil uVision 打开各工程目录下的 `project.uvproj`，编译后用 stc-isp 烧录。

**普通 C / C++（MinGW gcc）**：

```bash
gcc 文件名.c -o 输出名
./输出名
```

C++ 用 `g++`。

## 关于编译产物

仓库**只保存源码和工程文件**。`.exe` / `.obj` / `.lst` / `.hex` 等编译产物，以及 Keil 的 `Objects/`、`Listings/` 目录都由 `.gitignore` 排除——它们每次编译都会变，提交上去没有意义，还会把仓库撑大。
