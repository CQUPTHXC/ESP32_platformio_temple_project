# ESP32_platformio_temple_project

![编译标志](https://github.com/CQUPTHXC/ESP32_platformio_temple_project/actions/workflows/buildproject.yml/badge.svg)

HXC战队标准ESP32 PlatformIo项目模板工程
# 如何使用
1. 这是一个Platformio工程你应该在vscode中安装好PlatformIO插件
2. 将工程下载或克隆到本地
3. 使用vscode打开项目**根目录**
4. 修改platformio.ini中的配置
    1. 项目名称
   
    ![alt text](.github/img/image.png)

    2. 芯片型号

    ![alt text](.github/img/image-1.png)
    
    3. 其他选项

# 文件目录

## .github 
用于存放与GitHub相关的配置文件和工作流文件。
### workflows 
包含GitHub Actions的工作流文件，工作流可以用来自动化构建、测试、部署等过程。
该工程带自动化编译的文件
## .pio
.pio 文件夹是PlatformIO IDE生成的一个重要文件夹，包含了项目的编译和构建过程中的临时文件和配置文件。

### build 文件夹: 存储编译生成的二进制文件和其他构建工件。

### libdeps 文件夹: 存储项目使用的外部库的依赖。

### test 文件夹: 包含与测试相关的构建文件。

### envs 文件夹: 用于存储与不同硬件环境相关的配置和构建输出。

## .vscode
用于存储Visual Studio Code (VSCode)编辑器的项目级别的设置和配置。
## include 

文件夹通常用于存放项目中需要的头文件（header files）。这些头文件定义了各种函数、宏、数据结构、和全局变量等，为源文件提供接口。头文件的使用可以帮助代码的模块化，使代码更加整洁和可维护。
## lib 文件夹

这个文件夹用于存储项目中使用的外部库（libraries）。

## test 文件夹

包含与项目相关的测试代码和测试配置。

## src 文件夹

主要代码文件所在的位置。通常会包含main.cpp或其他源文件

### main.cpp
程序从这里开始

## **platformio.ini**

这个文件是PlatformIO的配置文件，包含了项目的配置，包括硬件平台、编译选项、库管理等。

# LICENSE
开源协议，该项目使用MIT协议，如果基于该模板产生其他开源项目注意替换开源协议和版权归属

## .gitignore
列出在版本控制中需要忽略的文件或目录。

## merge_bins.py
用于合并bin文件的后处理脚本
