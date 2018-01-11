#ifndef BAOMAINWINDOS_H
#define BAOMAINWINDOS_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QNetworkAccessManager>

#include <QFile>
#include <QTextStream>
#include <QPoint>

namespace Ui {
class BaoMainwindos;
}

class BaoMainwindos : public QMainWindow
{
    Q_OBJECT

public:
    explicit BaoMainwindos(QWidget *parent = 0);
    ~BaoMainwindos();

private slots:
    void on_btnPlayTest_clicked();
    void on_pushButton_clicked();
    QString rect(QPoint c, float bound);

private:
    Ui::BaoMainwindos *ui;
    QMediaPlayer* player;
};

#endif // BAOMAINWINDOS_H
