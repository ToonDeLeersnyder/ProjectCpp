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
namespace Toon
{
    class Player:public QGraphicsRectItem
    {
    public:


        Player();
        ~Player();

    //    Health(QGraphicsItem * parent=0);
    //        void decrease();
    //        int getHealth();

        void moveLeft(int MoveSpeed = 20); //17) default valus in function definition
        void moveRight(int MoveSpeed = 20);





    };
}
#endif // PLAYER_H
