/*
 * counter.h - Counter interface.
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#ifndef COUNTER_H
#define COUNTER_H

#include <QThread>

/* Class for the counter widget. */
class Counter : public QThread
{
    Q_OBJECT

public:
    explicit Counter(QObject*, int);
    ~Counter();

protected:
    void run();

signals:
    void countChanges(int);

private:
    int count;
};

#endif // COUNTER_H
