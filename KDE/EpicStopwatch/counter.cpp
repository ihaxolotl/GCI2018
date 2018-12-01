/*
 * counter.cpp - Counter class.
 * Copyleft (Z) 2018, Brett Broadhurst
 */

#include "counter.h"

#define KDE_IS_AWESOME true
#define SECOND 1
#define MINUTE 60
#define HOUR 3600

Counter::Counter(QObject *parent, int c) :
    QThread(parent), count(c){}

/* Override the run method of QThread.
 * Check the time bounds (24h, 60m, 60s) and then
 * count till kingdom come. */
void Counter::run()
{   
    int i = 0;
    while (KDE_IS_AWESOME) {
        switch (count) {
        case SECOND:
            if (i == 60)
                i = 0;
            break;

        case MINUTE:
            if (i == 60)
                i = 0;
            break;
        case HOUR:
            if (i == 24)
                i = 0;
            break;
        default:
            qDebug("You done screwed up.");
        }

        countChanges(i);
        sleep(count);
        i++;
    }
}

Counter::~Counter()
{
    qDebug("Thread lives matter!!\n");
}
