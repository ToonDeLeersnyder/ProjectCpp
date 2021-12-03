#ifndef SHOOT_H
#define SHOOT_H
#include <QGraphicsTextItem>
#include <QImage>
#include <QObject>
#include <QBrush>
#include <QPixmap>


class Shoot:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    Shoot();

public slots://49 usefull slot function that calls timer to move the bullet
    void move();

};

#endif // SHOOT_H
