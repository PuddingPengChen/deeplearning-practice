#include <QDebug>
#include "baomainwindos.h"
#include "ui_baomainwindos.h"

BaoMainwindos::BaoMainwindos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaoMainwindos)
{
    ui->setupUi(this);
    player = new QMediaPlayer();
}

BaoMainwindos::~BaoMainwindos()
{
    delete ui;
}

void BaoMainwindos::on_btnPlayTest_clicked()
{

    QString txt = ui->lineEdit->text();
    int speed = 4;
    int voice_type = 6;
    QByteArray  url = "http://tts.baidu.com/text2audio?idx=1&tex=";
    url.append(QUrl::toPercentEncoding(txt));
    url.append(tr("&cuid=baidu_speech_demo&cod=2&lan=zh&ctp=1&pdt=1&spd=%1&per=%2&vol=5&pit=5").arg(speed).arg(voice_type));
    qDebug()<<url;

    player->setMedia(QUrl::fromLocalFile(url));
    player->play();
}


//产生Gcode
void BaoMainwindos::on_pushButton_clicked()
{
    QFile gcode("focus.gcode");
    gcode.open(QIODevice::ReadWrite);
    QTextStream out(&gcode);
    out<<"M14 \n";
    out<<"G4 S5 \n";
    out<<"M3 S1 \n";
    out<<"G28 \n";
    out<<"G1 Z20 \n";
    out<<"G1 F2000 \n";
    int gird = 5;
    int edage = 10;
    QPoint center(0,0);
    bool zig = true;
    for(int y=5; y<250;y+=20)
    {
        //从左到右
//        if(zig)
        {
            for(int x=5;x<450;x+=20)
            {
                center.setX(x);
                center.setY(y);
                out<<rect(center,edage);
            }
            zig = false;
        }
//        else
//        {
//            for(int x=450;x>0;x-=15)
//            {
//                center.setX(x);
//                center.setY(y);
//                out<<rect(center,edage);
//            }
//            zig = true;
//        }

    }
//    out<<"G0 X450 Y250 \n";
//    out<<"M4 P50 \n";
//    out<<"G1 X450 Y250 \n";
//    out<<"G1 X450 Y0 \n";
//    out<<"G1 X0 Y0 \n";
//    out<<"G1 X0 Y250 \n";
//    out<<"M4 P0 \n";
    out<<"G28 X Y \n";
    gcode.close();
}

QString BaoMainwindos::rect(QPoint c, float bound)
{
    float half_edage = bound/2;
    QString rec = tr("G0 X%1 Y%2 \n").arg(c.x()-half_edage).arg(c.y()+half_edage);
    rec += "M4 P50 \n";
    rec += tr("G1 X%1 Y%2 \n").arg(c.x()+half_edage).arg(c.y()+half_edage);
    rec += tr("G1 X%1 Y%2 \n").arg(c.x()+half_edage).arg(c.y()-half_edage);
    rec += tr("G1 X%1 Y%2 \n").arg(c.x()-half_edage).arg(c.y()-half_edage);
    rec += tr("G1 X%1 Y%2 \n").arg(c.x()-half_edage).arg(c.y()+half_edage);
    rec += "M4 P0 \n";
    return rec;
}
