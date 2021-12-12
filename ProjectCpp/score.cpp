#include "score.h"
#include <QFont>
#include <QDebug>
#include <QFile>


Score::Score(QGraphicsTextItem * parent): QGraphicsTextItem(parent)
{
    score = 0;
   updateBestScore();
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::green);
    setFont(QFont("times",16));


}

void Score::increase(int score)
{
    this->score += score;//15) usefull this. if there is no this then the score wont update anything.
    setPlainText(QString("Score: ") + QString::number( score)); // Score: 0

}
// 3) usefull and correct encapsulation, access for private variable read by public function in same class
int Score::getScore()
{
    return score;
}

int Score::getBestScore()
{
//    QFile inputFile(fileName);
//    if (inputFile.open(QIODevice::ReadOnly))
//    {
//       QTextStream in(&inputFile);
//       while (!in.atEnd())
//       {
//          QString line = in.readLine();
//          ...
//       }
//       inputFile.close();
//    }
    std::ifstream input("bestscore.txt");
    input >> bestscore;

    return 0;
}

int Score::updateBestScore()
{

    std::ofstream output("bestscore.txt");
    if (score > bestscore)
    {
        output << score;
    }
    else
    {
      output << bestscore;
    }
    return 0;
}
