#include "enemy.h"
#include <stdlib.h>
#include "player.h"
#include "game.h"
#include <QString>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "health.h"


Toon::Enemy::Enemy()
{
    int random_number = rand() % 1200;
    setPos(random_number,0);
    setPixmap(QPixmap(":/images/bullet/Resources/bullet.png"));
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    // start the timer
    timer->start(50);

}

void Toon::Enemy::move()
{
    // move enemy down
    setPos(x(),y()+5);
    if (pos().y()  > 800)
    {

        scene()->removeItem(this);
        delete this;
        }
}




