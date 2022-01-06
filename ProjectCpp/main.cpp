#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <stdlib.h>
#include <game.h>


//  1) CLEAN MAIN



int main(int argc, char *argv[])
{
   QApplication a(argc, argv);

   Toon::Game* game= new Toon::Game(atoi(argv[1]), atoi(argv[2]));

   game->show();
   game->displayMainMenu();


    return a.exec();
}
