#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    m_ui(new Ui::MainWindow),
    m_baiduVop("54GzQbyspseUfRUbvDdVMKQW", "9dfXhqPz0F6RrpoNLAzMzkBLz4fpHPu9")
{
    m_ui->setupUi(this);

    connect(m_ui->pushButton, &QPushButton::clicked, [=](const bool &checked)
    {
        if(checked)
        {
            m_ui->pushButton->setText("Stop");
            this->startInput();
        }
        else
        {
            m_ui->pushButton->setText("Start");
            this->inputFinish();
        }
    });

    qDebug() << "Refresh token:" << m_baiduVop.refreshToken();
}

MainWindow::~MainWindow(void)
{
    delete m_ui;
}

void MainWindow::startInput(void)
{
    m_baiduVop.start();
}

void MainWindow::inputFinish(void)
{
    const auto &&data = m_baiduVop.finish();

    if(data.first)
    {
        m_ui->label->setText(data.second);
    }
    else
    {
        m_ui->label->setText("识别错误");
    }
}
