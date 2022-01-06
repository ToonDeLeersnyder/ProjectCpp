#include "speedenemy.h"
#include <enemy.h>
#include <QString>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <shoot.h>

Toon::SpeedEnemy::SpeedEnemy()
{
    int random_Position_Number = rand() % 1200;
    setPos(random_Position_Number,0);
    setPixmap(QPixmap(":/images/bullet/Resources/enemyFast.png"));
    //int random_Speed_Value = rand() % 10;
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(EnemyMove()));

     //start the timer
    timer->start(50);
}

void Toon::SpeedEnemy::EnemyMove()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0; i < colliding_items.size(); ++i){

                if(typeid(*(colliding_items[i])) == typeid(Player)  ){


                    // Remove and delete items

                    scene()->removeItem(this);


                    delete this;

                    return;
                }
       }

    setPos(x(),y()+EnemySpeed);
    if (pos().y()  > 800)
    {

        scene()->removeItem(this);
        delete this;
        }
}
