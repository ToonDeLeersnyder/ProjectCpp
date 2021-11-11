#include "player.h"
#include <QGraphicsScene>


Player::Player()
{

// add the item to the scene
    QBrush C_player;
    C_player.setTextureImage(QImage(":/images/player/Resources/C_icon.png"));
    setBrush(C_player);
    setPen(Qt::NoPen);


}

Player::~Player()
{

}

void Player::moveLeft()
{
    if(pos().x() > 0)
    {
        setPos(x()-20,y());
    }
}

void Player::moveRight()
{
    if(pos().x() < 1100)
    {
        setPos(x()+20, y());
    }
}






