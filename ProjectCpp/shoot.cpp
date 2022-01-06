#include "shoot.h"
#include "player.h"
#include <QTimer>
#include <QGraphicsScene>
#include <slowenemy.h>
#include <speedenemy.h>
#include <QList>
#include <score.h>


Toon::Shoot::Shoot()
{

    setPixmap(QPixmap(":/images/bullet/Resources/bullet.png"));
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));//15) usefull this

    timer->start(50);


}

void Toon::Shoot::move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0; i < colliding_items.size(); ++i){

                if(typeid(*(colliding_items[i])) == typeid(SlowEnemy) ||typeid(*(colliding_items[i])) == typeid(SpeedEnemy) ){


                    // Remove and delete items
                    scene()->removeItem(colliding_items[i]);
                    scene()->removeItem(this);

                    delete colliding_items[i];
                    delete this;

                    return;
                }
    }


    setPos(x(),y()-10);
        // if the bullet is off the screen, destroy it
        if (pos().y() < -10){
            scene()->removeItem(this);
            delete this;
        }
}

