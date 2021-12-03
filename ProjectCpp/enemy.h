#ifndef ENEMY_H
#define ENEMY_H
#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>

class Enemy: public QObject,public QGraphicsPixmapItem //4) usefull and correct inheritance, inherit from qobject and qgraph for the creation of the slots , connect function
{
    Q_OBJECT
public:
    Enemy();
public slots:
    void move();

};




#endif // ENEMY_H
