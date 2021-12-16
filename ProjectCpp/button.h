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
        // constructors
        Button(QString name, QGraphicsItem* parent=NULL);

        // public methods (events)
        void mousePressEvent(QGraphicsSceneMouseEvent *event);
        void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
        void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    signals:
        void clicked();
    private:
        QGraphicsTextItem* text;
    };

}
#endif // BUTTON_H
