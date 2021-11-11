#include "game.h"

#include "shoot.h"

Game::Game()
{


    // create a scene
    scene = new QGraphicsScene();
    // add a view to visualize the scene

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setScene(scene);
    setFixedSize(1200,800);
    setGeometry(180,30,1200,800);
    scene->setSceneRect(0,0,1200,800);



    //Create player
    player= new Player();
    scene->addItem(player);
    scene->setBackgroundBrush(Qt::blue);
    player->setRect(0,0,100,100);
    player->setPos(550,700);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();



}


void Game::keyPressEvent(QKeyEvent *event)
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
      player->moveLeft();

    }
    else if (event->key() == Qt::Key_Right)
    {
      player->moveRight();
    }
    else if (event->key() == Qt::Key_Space)
    {

        Shoot * shoot = new Shoot();
        shoot->setRect(0,0,10,10);
        shoot->setPos(player->x()-45, player->y() - 40);
        scene->addItem(shoot);

    }



}
