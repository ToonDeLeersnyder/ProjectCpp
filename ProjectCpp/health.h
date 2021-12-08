#ifndef HEALTH_H
#define HEALTH_H
#include <QGraphicsTextItem>
#include <QFont>



class Health: public QGraphicsTextItem
{
public:
        Health(QGraphicsItem * parent=0);
        void damage();
        int getHealth();

private:
        int health;
        const int maxHealth = 10;
};

#endif // HEALTH_H
