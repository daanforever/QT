#include "sort.h"
#include <QtAlgorithms>

MySort::MySort(QObject *parent) :
    QObject(parent)
{
}

MySort::MySort(QString str) {
    string = str;
}

QString MySort::bubble(void) {
    int i,j;
    int strLen = string.length();
    QChar buffer;
    for (j=0; j < strLen; j++) {
    for (i=0; i < strLen-1; i++) {
        if (string[i] > string[i+1]) {
            buffer = string[i];
            string[i] = string[i+1];
            string[i+1] = buffer;
        }
    }
    }
    return string;
}
