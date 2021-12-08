#include "health.h"
#include "game.h"


Health::Health(QGraphicsItem * parent): QGraphicsTextItem(parent)
{

        health = 10;


        setPlainText(QString("Health: ") + QString::number(health) +QString("/") + QString::number(maxHealth)); // Health: 3
        setDefaultTextColor(Qt::red);
        setFont(QFont("times",16));
}
void Health::damage(){
    health--;
    setPlainText(QString("Health: ") + QString::number(health)+QString("/") + QString::number(maxHealth)); // Health: 2
    if(health == 0)
    {
        //scene->clear();
        //deathMenu();


    }

}

int Health::getHealth(){
    return health;
}

