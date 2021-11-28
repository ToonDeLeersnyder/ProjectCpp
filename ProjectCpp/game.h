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



class Game: public QGraphicsView
{

public:
    Game();
    void keyPressEvent(QKeyEvent * event);

private:
    QGraphicsScene * scene;
    Player* player;
    Enemy* enemy;


public :
    void create();
};
#endif // GAME_H
