#include "score.h"
#include <QFont>
#include <QDebug>

Score::Score()
{
    score = 0;


}

void Score::increase()
{
    score++;

}

int Score::getScore()
{
    return score;
}
