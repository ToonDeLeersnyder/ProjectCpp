#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QScrollBar>
#include <QPixmap>
#include <QBrush>
#include <QImage>
#include <player.h>
#include <game.h>

/*
Prereqs:
-basic knowledge of c++ (pointers and memory management)
-VERY basic knowledge of Qt (widgets)
Tutorial Topics:
-QGraphicsScene
-QGraphicsItem (QGraphicsRectItem)
-QGraphicsView
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   Game* game= new Game();
   game->show();

    return a.exec();
}
