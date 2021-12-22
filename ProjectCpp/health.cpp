#include "health.h"
#include "game.h"


Toon::Health::Health(QGraphicsItem * parent): QGraphicsTextItem(parent) // create the health text for on the game scene
{

        setHealth(10);


        setPlainText(QString("Health: ") + QString::number(health) +QString("/") + QString::number(maxHealth)); // Health: 3
        setDefaultTextColor(Qt::red);
        setFont(QFont("times",16));
}
void Toon::Health::damage(){ // decrease health
    health--;
    setPlainText(QString("Health: ") + QString::number(health)+QString("/") + QString::number(maxHealth)); // Health: 2
    if(health == 0)
    {
        //scene->clear();
        //deathMenu();


    }

}

int Toon::Health::getHealth() const { // 19) usefull getters and setters
    return health;
}

void Toon::Health::setHealth(int a)
{
    health = a;
}

