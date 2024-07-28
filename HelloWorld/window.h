#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;
class Window : public QWidget
{
  //  Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);
private:
    QPushButton *m_button;
};

#endif // WINDOW_H
