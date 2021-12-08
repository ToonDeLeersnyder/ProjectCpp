#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <game.h>



int main(int argc, char *argv[])
{
   QApplication a(argc, argv);

   //pass val of arg v for cheat activation?
   //game->healthPass(argv[1])

   Game* game= new Game();

   game->show();
   game->displayMainMenu();


    return a.exec();
}
