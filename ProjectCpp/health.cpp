#include "health.h"
#include "game.h"


Toon::Health::Health(QGraphicsItem * parent): QGraphicsTextItem(parent)
{

        setHealth(10);


        setPlainText(QString("Health: ") + QString::number(health) +QString("/") + QString::number(maxHealth)); // Health: 3
        setDefaultTextColor(Qt::red);
        setFont(QFont("times",16));
}
void Toon::Health::damage(){
    health--;
    setPlainText(QString("Health: ") + QString::number(health)+QString("/") + QString::number(maxHealth)); // Health: 2
    if(health == 0)
    {
        //scene->clear();
        //deathMenu();


    }

}

int Toon::Health::getHealth() const { // 19) usefull getter s and settters
    return health;
}

void Toon::Health::setHealth(int a)
{
    health = a;
}

