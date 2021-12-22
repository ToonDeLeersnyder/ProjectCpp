#include "slowenemy.h"
#include "enemy.h"
#include <QString>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>

Toon::SlowEnemy::SlowEnemy()
{
    const int random_Position_Number = rand() % 1200;
    setPos(random_Position_Number,0);
    setPixmap(QPixmap(":/images/bullet/Resources/enemySlow.png"));
    //const int random_Speed_Value = rand() % 10;
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(EnemyMove()));

//start the timer
    timer->start(50);

}

void Toon::SlowEnemy::EnemyMove()
{
    setPos(x(),y()+EnemySpeed);
    if (pos().y()  > 800)
    {

        scene()->removeItem(this);
        delete this;
        }
}
