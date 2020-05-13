#ifndef XMLSERIALIZER_H
#define XMLSERIALIZER_H

#include <QString>
#include <QVector>
#include "record.h"
#include "treenode.h"

class XmlSerializer
{
public:
    virtual ~XmlSerializer() {}

    virtual QString format(const Record & record) { return ""; }

    virtual QString format(const QVector<Record> & records) { return ""; }

    virtual QString format(const TreeNode & root) { return ""; }
};

#endif // XMLSERIALIZER_H
