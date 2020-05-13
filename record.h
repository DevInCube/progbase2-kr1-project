#ifndef RECORD_H
#define RECORD_H

#include <QString>

struct Record
{
    int Year = 0;
    int Ceremony = 0;
    QString Award;
    bool Winner = false;
    QString Name;
    QString Film;
};

#endif // RECORD_H
