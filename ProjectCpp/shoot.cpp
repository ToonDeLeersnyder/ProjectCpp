#include "shoot.h"
#include "player.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>

Toon::Shoot::Shoot()
{

    setPixmap(QPixmap(":/images/bullet/Resources/bullet.png"));
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));//15) usefull this
    //we provide this as context in the call to connect(). The context object provides information about in which thread the receiver should be executed.
    //This is important, as providing the context ensures that the receiver is executed in the context thread.

    // start the timer
    timer->start(50);


}

void Toon::Shoot::move()
{
    setPos(x(),y()-10);
        // if the bullet is off the screen, destroy it
        if (pos().y() < -10){
            scene()->removeItem(this);
            delete this;
        }
}

