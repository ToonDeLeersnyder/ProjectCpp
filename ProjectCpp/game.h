#ifndef GAME_H
#define GAME_H
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QScrollBar>
#include <QPixmap>
#include <QBrush>
#include <QImage>
#include <QTimer>
#include <QKeyEvent>
#include <windows.h>
#include "player.h"
#include "score.h"
#include "enemy.h"
#include "health.h"

namespace Toon
{
    class Game: public QGraphicsView
    {
        Q_OBJECT
    public:
        Game();
        ~Game();
        void keyPressEvent(QKeyEvent * event);
        void displayMainMenu();
        void deathMenu();
        void createEnemy();


    private:
        QGraphicsScene * scene;
        Player* player;

        Score * score;
        Health * health;



    public slots:
        void start();
    };

}
#endif // GAME_H
