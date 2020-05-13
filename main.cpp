#include "storage.h"
#include "factory.h"
#include "xmlserializer.h"

// @note these example functions can be removed
void task1Example();
void task2Example();

// @note you can create any extra functions you want

// @note the code will be compiled with `-std=c++17` option
int main()
{
    // @note you can write any valid code here, this function will be ignored
    task1Example();
    task2Example();
    return 0;
}

//=TASK1======================================================================

// @note you can modify your class as you wish
// @todo but it MUST inherit Storage
class MyStorage : public Storage
{
    // @note you can create any fields you want
    QString filepath;

public:
    explicit MyStorage(const QString & filepath)
        : filepath(filepath)
    {
    }

    // @todo override your methods here

    // @note you can create any extra methods you want
};

// @todo you MUST put this function implementation in your solution
// @todo you MUST use this filepath to read data from CSV file
Storage * Factory::createStorage(const QString & filepath)
{
    // @todo you MUST return a new object of your class here
    return new MyStorage(filepath);
}

void task1Example()
{
    // @note example usage with some given file path
    Storage * storage = Factory::createStorage("input.csv");
    if (storage->open())
    {
        // @note your methods will be used here
        //
        storage->close();
    }
    // @note your object will be freed
    delete storage;
}

//=TASK2======================================================================

// @note you can modify your class as you wish
// @todo but it MUST inherit XmlSerializer

class MyXmlSerializer : public XmlSerializer
{
public:
    // @todo override your methods here

    // @note you can create any extra methods you want
};

// @todo you MUST put this function implementation in your solution
XmlSerializer * Factory::createXmlSerializer()
{
    // @todo you MUST return a new object of your class here
    return new MyXmlSerializer();
}

void task2Example()
{
    // @note example usage with some given file path
    XmlSerializer * xmlSerializer = Factory::createXmlSerializer();
    // @note your methods will be used here
    //
    // @note your object will be freed
    delete xmlSerializer;
}
