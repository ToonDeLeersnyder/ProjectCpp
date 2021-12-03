#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <fstream>

class Score : public QGraphicsTextItem
{
public:
    Score(QGraphicsTextItem * parent=0);
    void increase(int amount);
    int getScore();
    int getBestScore();
    int updateBestScore();
private:
    int score;
    int bestscore;
};

#endif // SCORE_H
