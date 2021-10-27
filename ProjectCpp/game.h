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
#include <player.h>


class Game: public QGraphicsView
{
public:
    Game();
};

#endif // GAME_H
