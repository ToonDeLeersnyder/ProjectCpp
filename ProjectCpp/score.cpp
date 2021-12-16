#include "score.h"
#include <QFont>
#include <QDebug>
#include <QFile>


Toon::Score::Score(QGraphicsTextItem * parent): QGraphicsTextItem(parent)
{
    score = 0;
   updateBestScore();
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::green);
    setFont(QFont("times",16));


}

void Toon::Score::increase(int score)
{
    this->score += score;
    setPlainText(QString("Score: ") + QString::number( score)); // Score: 0

}

int Toon::Score::getScore()
{
    return score;
}

int Toon::Score::getBestScore()
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

int Toon::Score::updateBestScore()
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
