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
        virtual inline void setEnemySpeed(int speedValue = 5) { EnemySpeed = speedValue; };// 44) inline function-------------------------------------
        virtual inline int getEnemySpeed() const { return EnemySpeed; }; //9) usefull virtual function---------------------------------------------------------
    public slots:
        virtual void EnemyMove() = 0; //7/8) base and abstract base---------------------------------------------------------
    private:

        int EnemySpeed;


    };





}
#endif // ENEMY_H
