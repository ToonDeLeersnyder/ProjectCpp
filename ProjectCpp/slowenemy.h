#ifndef SLOWENEMY_H
#define SLOWENEMY_H

#include "enemy.h"
namespace Toon
{
    class SlowEnemy : public Enemy
    {
        Q_OBJECT
    public:
        SlowEnemy();
        ~SlowEnemy() {}
        inline void setEnemySpeed(int speedValue = 5) { EnemySpeed = speedValue; };
        inline int getEnemySpeed() const { return EnemySpeed; };
        // Enemy interface
    public slots:
        void EnemyMove();
    private:

        int EnemySpeed;
    };
}

#endif // SLOWENEMY_H
