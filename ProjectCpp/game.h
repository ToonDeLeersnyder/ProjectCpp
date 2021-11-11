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
#include <QKeyEvent>
#include "player.h"
#include "score.h"



class Game: public QGraphicsView
{
public:
    Game();
    void keyPressEvent(QKeyEvent * event);

private:
    QGraphicsScene * scene;
    Player* player;

};

#endif // GAME_H
