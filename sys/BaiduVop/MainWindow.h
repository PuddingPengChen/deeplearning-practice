#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Qt lib import
#include <QMainWindow>

// JasonQt lib import
#include "JasonQt/JasonQt_Vop.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *m_ui;
    JasonQt_Vop::BaiduVop m_baiduVop;

public:
    explicit MainWindow(QWidget *parent = NULL);

    ~MainWindow(void);

public slots:
    void startInput(void);

    void inputFinish(void);
};

#endif // MAINWINDOW_H
