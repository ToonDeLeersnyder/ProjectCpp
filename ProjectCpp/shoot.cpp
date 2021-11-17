#include "shoot.h"
#include "player.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>

Shoot::Shoot()
{

    setPixmap(QPixmap(":/images/bullet/Resources/bullet.png"));
    QTimer * timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));

        // start the timer
        timer->start(50);
}

void Shoot::move()
{
    setPos(x(),y()-10);
        // if the bullet is off the screen, destroy it
        if (pos().y() < 0){
            scene()->removeItem(this);
            delete this;
        }
}

