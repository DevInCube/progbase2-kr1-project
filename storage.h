#ifndef STORAGE_H
#define STORAGE_H

#include <QString>
#include "treenode.h"

class Storage
{
public:

// you can overload destructor if you need to
virtual ~Storage() {}

// you can load and cache data here, or do nothing.
// this will be called once before using any other method

virtual bool open() { return true; }
// you can clear cached data here, or do nothing.
// this will be called once after object is used
// and only if open() call returned true
virtual void close() {}

// region #0 one object

virtual Record * getNameWithMostRecords() { return nullptr; }

virtual Record * getFilmWithMostRecords() { return nullptr; }

virtual Record * getFilmWithMostWinsByCeremony(int ceremony) { return nullptr; }

virtual Record * getNameWinnerByCeremonyAward(int ceremony, const QString & award) { return nullptr; }

// region #1 one-level tree (array)

virtual QVector<Record> getAwardsByCeremony(int ceremony) { return QVector<Record>(); }

virtual QVector<Record> getWinnersByCeremony(int ceremony) { return QVector<Record>(); }

virtual QVector<Record> getWinnersByAward(const QString & award) { return QVector<Record>(); }

virtual QVector<Record> getNamesByFilm(const QString & film) { return QVector<Record>(); }

virtual QVector<Record> getFilmsByName(const QString & name) { return QVector<Record>(); }

virtual QVector<Record> getCeremoniesByName(const QString & name) { return QVector<Record>(); }

virtual QVector<Record> getNamesByCeremonyAward(int ceremony, const QString & award) { return QVector<Record>(); }

// region #2 multi-level tree

// root is ceremony record
// children: films records with film strings
//   each child: this film record with film string
//   children: this film nominations
virtual TreeNode * getCeremonyWithFullFilms(int ceremony) { return nullptr; }

// root is ceremony record
// children: awards records with award strings
//   each child: this award record with award string
//   children: this award nominees
virtual TreeNode * getCeremonyWithFullAwards(int ceremony) { return nullptr; }

// root is ceremony record
// children: award records with winner name
//   each child: this award record with award string and winner name
//   children: all other nominees of the same award who lost
virtual TreeNode * getCeremonyWithFullNominees(int ceremony) { return nullptr; }

};
#endif
