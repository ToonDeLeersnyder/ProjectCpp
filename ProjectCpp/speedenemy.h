#ifndef SPEEDENEMY_H
#define SPEEDENEMY_H

#include "enemy.h"
namespace Toon
{

    class SpeedEnemy : public Enemy
    {
        Q_OBJECT
    public:
        SpeedEnemy();
        ~SpeedEnemy() {}
        inline void setEnemySpeed(int speedValue = 5) { EnemySpeed = speedValue; };
        inline int getEnemySpeed() const { return EnemySpeed; };
        // Enemy interface
    public slots:
        void EnemyMove();
    private:

        int EnemySpeed;
    };

}



#endif // SPEEDENEMY_H
