#include "game.h"
#include "shoot.h"
#include "enemy.h"
#include "slowenemy.h"
#include "speedenemy.h"
#include "button.h"


Toon::Game::Game(int x, int y)
{



    if ( x == 0 ||  y == 0)
    {
        x = 1200;
        y = 800;

    }
    scene = new QGraphicsScene(); // 32) new hierzo--------------------------------------------------
    // add a view to visualize the scene

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setScene(scene);
    setFixedSize(x,y);
    setGeometry(180,30,1200,800);
    scene->setSceneRect(0,0,1200,800);

}

Toon::Game::~Game()
{
    delete player;
    delete score;
    delete health;
}
void Toon::Game::start()
{
    scene->clear();
    //Create player
    player= new Player();
    scene->addItem(player);
    scene->setBackgroundBrush(Qt::blue);
    player->setRect(0,0,100,100);
    player->setPos(550,700);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    // create score

    score = new Score();
    scene->addItem(score);

    health = new Health();
    health->setPos(health->x() + 1000,health->y());

    scene->addItem(health);


    // create enemy
    createEnemy();

}



void Toon::Game::keyPressEvent(QKeyEvent *event)
{

    if (event->key() == Qt::Key_Left)
    {
      player->movePlayerLeft();

    }
    else if (event->key() == Qt::Key_Right)
    {
      player->movePlayerRight();
    }
    else if (event->key() == Qt::Key_Space)
    {

        Shoot * shoot = new Shoot();

        shoot->setPos(player->x()+42.5, player->y() - 40);
        scene->addItem(shoot);

    }



}

void Toon::Game::displayMainMenu()
{
    // create the title text
       QGraphicsTextItem* titleText = new QGraphicsTextItem(QString("battle of the code"));
       QFont titleFont("comic sans MS",50);
       titleText->setFont(titleFont);
       const int txPos = this->width()/2 - titleText->boundingRect().width()/2;
       const int tyPos = 150;
       titleText->setPos(txPos,tyPos);
       /**/titleText->setDefaultTextColor("grey");
       /**/scene->addItem(titleText);

       // create the play button
       Button* playButton = new Button(QString("Play Epic Game"));
       const int xpos1 = (this->width()/2) + 5 ;
       const int ypos1 = 275;
       playButton->setPos(xpos1,ypos1);
       connect(playButton,SIGNAL(clicked()),this,SLOT(start()));
       scene->addItem(playButton);

       // create the quit button
       Button* quitButton = new Button(QString("Quit"));
       const int xpos2 = this->width()/2 -  2*(quitButton->boundingRect().width()/2) - 5;
       const int ypos2 = 275;
       quitButton->setPos(xpos2,ypos2);
       connect(quitButton,SIGNAL(clicked()),this,SLOT(close()));
       scene->addItem(quitButton);

       /* text box for best score */

       // background color
       scene->setBackgroundBrush(Qt::blue);
}

void Toon::Game::deathMenu()
{
        QGraphicsTextItem* DeathText = new QGraphicsTextItem(QString("GAME OVER"));
        QFont titleFont("comic sans MS",50);
        DeathText->setFont(titleFont);
        const int txPos = this->width()/2 - DeathText->boundingRect().width()/2;
        const int tyPos = 150;
        DeathText->setPos(txPos,tyPos);
        /**/DeathText->setDefaultTextColor("red");
        /**/scene->addItem(DeathText);

        // create the play button
        Button* playButton = new Button(QString("Play Again"));
        const int xpos1 = (this->width()/2) + 5 ;
        const int ypos1 = 275;
        playButton->setPos(xpos1,ypos1);
        connect(playButton,SIGNAL(clicked()),this,SLOT(start()));
        scene->addItem(playButton);

        // create the quit button
        Button* quitButton = new Button(QString("Quit"));
        const int xpos2 = this->width()/2 -  2*(quitButton->boundingRect().width()/2) - 5;
        const int ypos2 = 275;
        quitButton->setPos(xpos2,ypos2);
        connect(quitButton,SIGNAL(clicked()),this,SLOT(close()));
        scene->addItem(quitButton);

        /* text box for best score and ur score*/



        // background color
        scene->setBackgroundBrush(Qt::black);

}




void Toon::Game::createEnemy()
{
    for(int i = 0; i < 10; i++)
    {
        //qDebug()<< "BUH" ;
        Enemy* enemy = new SlowEnemy();
        enemy->setEnemySpeed(5); // 10)polymorphism-----------------------------------------------------------------------------
        scene->addItem(enemy);
        //enemy->EnemyMove(5);

    }
    for(int i = 0; i < 10; i++)
    {
        //qDebug()<< "BUH" ;
        Enemy* enemy2 = new SpeedEnemy();
        enemy2->setEnemySpeed(10);
        scene->addItem(enemy2);


    }

}



