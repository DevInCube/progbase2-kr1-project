#ifndef TREENODE_H
#define TREENODE_H

#include <QVector>
#include "record.h"

struct TreeNode
{
    Record Value;
    QVector<TreeNode *> Children;
};

#endif // TREENODE_H
