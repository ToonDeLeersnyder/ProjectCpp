#include "player.h"
#include <QKeyEvent>


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

void Player::keyPressEvent(QKeyEvent *event)
{
//    switch (event->key()) {
//            case Qt::Key_Left:
//                setPos(x()-30,y());

//                if(x()<0){
//                    setPos(0,y());
//                }

//            break;
//            case Qt::Key_Right:
//                setPos(x()+30,y());

//                if(x()>1100){
//                    setPos(1100,y());
//                }
//            break;
//    }

    if (event->key() == Qt::Key_Left)
    {
        if(pos().x() > 0)
        {
            setPos(x()-20,y());
        }
    }
    else if (event->key() == Qt::Key_Right)
    {
        if(pos().x() < 1100)
        {
            setPos(x()+20, y());
        }
    }



}


