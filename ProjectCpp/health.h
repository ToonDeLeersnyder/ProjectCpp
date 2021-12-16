#ifndef HEALTH_H
#define HEALTH_H
#include <QGraphicsTextItem>
#include <QFont>

namespace Toon
{
    class Health: public QGraphicsTextItem //4) inherit for text to be added to the scene
    {
    public:
            Health(QGraphicsItem * parent=0);
            void damage();
            int getHealth() const ; // 3) usefull and correct encapsulation.--------------------------------------------------------------------
            void setHealth(int a);

    private:
            int health;
            const int maxHealth = 10;
    };
}
#endif // HEALTH_H
