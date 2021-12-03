#ifndef HEALTH_H
#define HEALTH_H
#include <QGraphicsTextItem>

class Health: public QGraphicsTextItem
{
public:
        Health(QGraphicsItem * parent=0);
        void damage();
        int getHealth();
private:
        int health;
        int maxHealth = 10;
};

#endif // HEALTH_H
