# diary
daily self-improvement

## Mac Duo（macOS）

本仓库已集成 [Mac Duo](https://github.com/sumimakito/Mac-Duo)，用于在 MacBook 合盖时对内置屏幕内容应用实时倾斜、模糊和渐暗效果。实现位于 [`mac-duo/`](./mac-duo/)；原项目的 Apache License 2.0 许可和署名文件也一并保留。

### 系统要求

- macOS 14 或更高版本
- Xcode 16 或更高版本（包含 Swift 6.0 或更高版本；仅安装 Command Line Tools 不足以编译 SwiftUI）
- 带有 macOS 可识别内置合盖角度传感器的 MacBook
- 首次运行时允许“屏幕录制”权限

### 构建和运行

在仓库根目录执行：

```sh
./mac-duo/build.sh
```

构建完成后可在 Finder 中打开 `mac-duo/build/Mac Duo.app`。如果要构建后直接启动：

```sh
./mac-duo/build.sh --run
```

也可以在 VS Code 的“运行任务”中选择 **Mac Duo：构建应用** 或 **Mac Duo：构建并运行**。首次启动若没有效果，请到“系统设置 → 隐私与安全性 → 屏幕录制”授予该应用权限；重新构建使用临时签名后，macOS 可能需要再次授权。

该效果只作用于内置屏幕；不支持的 MacBook 会在菜单栏应用中提示传感器不可用。
