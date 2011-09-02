#ifndef SORT_H
#define SORT_H

#include <QObject>

class MySort : public QObject
{
    Q_OBJECT
public:
    explicit MySort(QObject *parent = 0);
    explicit MySort(QString str);
    QString bubble(void);
    QString
signals:

public slots:

private:
    QString string;
};

#endif // SORT_H
