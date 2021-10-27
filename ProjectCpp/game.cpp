#include "game.h"

Game::Game()
{


    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();
    // add a view to visualize the scene

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // create an item to put into the scene
    Player* player= new Player();
    scene->addItem(player);
    scene->setBackgroundBrush(Qt::blue);





    setScene(scene);
    setFixedSize(1200,800);
    setGeometry(180,30,1200,800);
    scene->setSceneRect(0,0,1200,800);

}
