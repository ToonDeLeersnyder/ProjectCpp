#ifndef PLAYER_H
#define PLAYER_H
#include <QPixmap>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QWindow>
#include <QBrush>
#include <QImage>
#include <QObject>

class Player:public QGraphicsRectItem
{
public:
    int Hp;
    int HPMax;

    Player();
    ~Player();

    void keyPressEvent(QKeyEvent * event);

};

#endif // PLAYER_H
