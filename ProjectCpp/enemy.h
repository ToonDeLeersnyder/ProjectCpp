#ifndef ENEMY_H
#define ENEMY_H
#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
namespace Toon
{
    class Enemy: public QObject,public QGraphicsPixmapItem //6) usefull and correct Multiple inheritance, inherit from qobject and qgraph for the creation of the slots , connect function
    {
        Q_OBJECT
    public:
        Enemy();
        virtual inline void setEnemySpeed(int speedValue = 5) { EnemySpeed = speedValue; };
        virtual inline int getEnemySpeed() const { return EnemySpeed; };
    public slots:
        virtual void EnemyMove() = 0;
    private:

        int EnemySpeed;


    };





}
#endif // ENEMY_H
