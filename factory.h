#ifndef STORAGEFACTORY_H
#define STORAGEFACTORY_H

#include <QString>
#include "storage.h"
#include "xmlserializer.h"

class Factory
{
public:
    // implement this function for task 1
    static Storage * createStorage(const QString & filepath);
    // implement this function for task 2
    static XmlSerializer * createXmlSerializer();
};


#endif // STORAGEFACTORY_H
