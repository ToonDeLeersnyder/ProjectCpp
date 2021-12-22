#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <game.h>


//  1) CLEAN MAIN



int main(int argc, char *argv[])
{
   QApplication a(argc, argv);



   Toon::Game* game= new Toon::Game();

   game->show();
   game->displayMainMenu();


    return a.exec();
}
