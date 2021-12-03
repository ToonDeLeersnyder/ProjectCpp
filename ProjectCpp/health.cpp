#include "health.h"
#include <QFont>

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
}

int Health::getHealth(){
    return health;
}
