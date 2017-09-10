#include <QDebug>
#include "emptyclass.h"

emptyClass::emptyClass()
{
    value = 0;
}

emptyClass::~emptyClass()
{
    qDebug() << "Destroyed object with value: " << value;
}

int emptyClass::read()
{
    return value;
}

int emptyClass::write(int val)
{
    value = val;
}
