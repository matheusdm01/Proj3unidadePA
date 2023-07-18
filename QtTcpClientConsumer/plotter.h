#ifndef PLOTTER_H
#define PLOTTER_H

#include <QVector>
#include <QWidget>
#include <QTimer>


class Plotter : public QWidget
{
    Q_OBJECT
private:
    int *atl;
    QTimer *atual;
    QVector<int> valor;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
public slots:
    void setValor(int _valor);
signals:

};

#endif // PLOTTER_H
