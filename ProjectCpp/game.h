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



class Game: public QGraphicsView
{
    Q_OBJECT
public:
    Game();
    void keyPressEvent(QKeyEvent * event);
    void displayMainMenu();
    void create();

private:
    QGraphicsScene * scene;
    Player* player;
    Enemy* enemy;
    Score * score;
    Health * health;



public slots:
    void start();
};
#endif // GAME_H
