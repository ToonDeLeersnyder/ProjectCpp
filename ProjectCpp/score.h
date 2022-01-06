#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <fstream>
namespace Toon
{
    class Score : public QGraphicsTextItem
    {
    public:
        Score(QGraphicsTextItem * parent=0);
        void increaseScore(int amount);
        int getScore() const;
        int getBestScore(); // 16) usefull member function -----------------------------------------------------------
        int updateBestScore();
    private:
        int score; // 18) usefull member variable----------------------------------------------------------------
        int bestscore;
    };
}


#endif // SCORE_H
