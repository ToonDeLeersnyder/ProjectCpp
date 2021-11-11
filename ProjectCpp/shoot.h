#ifndef SHOOT_H
#define SHOOT_H
#include <QGraphicsTextItem>
#include <QImage>
#include <QObject>
#include <QBrush>
#include <QPixmap>


class Shoot:public QGraphicsRectItem
{
public:
    Shoot();
    void move();
};

#endif // SHOOT_H
