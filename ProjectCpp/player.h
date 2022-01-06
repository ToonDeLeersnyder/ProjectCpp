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
        ~Player();//14) destructor---------------------------------------------------



        void movePlayerLeft(int MoveSpeed = 20); //17) default valus in function definition----------------------------
        void movePlayerRight(int MoveSpeed = 20);





    };
}
#endif // PLAYER_H
