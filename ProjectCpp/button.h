#ifndef BUTTON_H
#define BUTTON_H
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
namespace Toon
{
    // 2) usefull class to create button.--------------------------------------------------------------

    class Button:public QObject, public QGraphicsRectItem{
        Q_OBJECT
    public:

        Button(QString name, QGraphicsItem* parent=NULL); //12) sepcific constructor 1--------------------------------------


        void mousePressEvent(QGraphicsSceneMouseEvent *event = NULL);
        void hoverEnterEvent(QGraphicsSceneHoverEvent *event = NULL);
        void hoverLeaveEvent(QGraphicsSceneHoverEvent *event = NULL);
    signals:
        void clicked();
    private:
        QGraphicsTextItem* text;
    };

}
#endif // BUTTON_H
