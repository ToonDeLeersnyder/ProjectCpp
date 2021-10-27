#include "player.h"
#include <QKeyEvent>


Player::Player()
{

    setRect(0,0,100,100);
    setPos(550,700);
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();

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
    switch (event->key()) {
            case Qt::Key_Left:
                setPos(x()-30,y());

                if(x()<0){
                    setPos(0,y());
                }

            break;
            case Qt::Key_Right:
                setPos(x()+30,y());

                if(x()>1100){
                    setPos(1100,y());
                }
            break;
        }
}
