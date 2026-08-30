#include "mainwindow.h"
#include <QMessageBox> // 引入消息框库
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{ //引入界面控件
    ui->setupUi(this);

    // 1. 设置整个窗口的背景色（浅灰色护眼背景）
    this->setStyleSheet("QMainWindow { background-color: #f0f2f5; }");

    // 2. 美化输入框（圆角 + 聚焦变蓝）
    QString inputStyle = R"(
        QLineEdit
        {
            background-color: #ffffff;
            border: 1px solid #d9d9d9;
            border-radius: 6px;
            padding: 10px 15px;
            font-size: 14px;
            color: #333;
        }
        QLineEdit:focus {
            border: 1px solid #1890ff; /* 聚焦时的蓝色边框 */
            background-color: #fff;
        }
    )";
    ui->lineEdit->setStyleSheet(inputStyle);   // 用户名输入框
    ui->lineEdit_2->setStyleSheet(inputStyle); // 密码输入框

    // 3. 美化登录按钮（蓝色渐变感 + 悬停反馈）
    QString btnStyle = R"(
        QPushButton {
            background-color: #1890ff;
            color: white;
            border: none;
            border-radius: 6px;
            padding: 12px;
            font-size: 16px;
            font-weight: bold;
        }
        QPushButton:hover {
            background-color: #40a9ff; /* 鼠标悬停变亮 */
        }
        QPushButton:pressed {
            background-color: #096dd9; /* 按下变深 */
        }
    )";
    ui->pushButton->setStyleSheet(btnStyle);
    //TODO: 填充逻辑
}

MainWindow::~MainWindow()
{
    delete ui;
}
