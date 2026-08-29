cmake_minimum_required(VERSION 3.16)

# 项目名称和版本
project(MyFirstApp VERSION 1.0.0 LANGUAGES CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找 Qt6 组件
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# 设置自动处理 moc, uic, rcc (Qt特有的元对象编译)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# 添加可执行文件
# 这里列出了所有的源文件
add_executable(MyFirstApp
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

# 链接 Qt 库
target_link_libraries(MyFirstApp PRIVATE Qt6::Widgets)
