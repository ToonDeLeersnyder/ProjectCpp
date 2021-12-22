#include "player.h"
#include <QGraphicsScene>


Toon::Player::Player()
{

// add the item to the scene
    QBrush C_player;
    C_player.setTextureImage(QImage(":/images/player/Resources/C_icon.png"));
    setBrush(C_player);
    setPen(Qt::NoPen);


}

Toon::Player::~Player()
{

}

void Toon::Player::movePlayerLeft(int MoveSpeed)
{
    if(pos().x() > 0)
    {
        setPos(x()-MoveSpeed,y());
    }
}

void Toon::Player::movePlayerRight(int MoveSpeed)
{
    if(pos().x() < 1100)
    {
        setPos(x()+MoveSpeed, y());
    }
}






