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
    public slots:
        void move();

    };





}
#endif // ENEMY_H
