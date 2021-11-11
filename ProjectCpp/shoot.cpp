#include "shoot.h"
#include "player.h"

Shoot::Shoot()
{
    QBrush bullet;
    bullet.setTextureImage(QImage(":/images/bullet/Resources/bullet.png"));
    setBrush(bullet);
    setPen(Qt::NoPen);

}

void Shoot::move()
{

}
