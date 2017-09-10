#ifndef EMPTYCLASS_H
#define EMPTYCLASS_H

class emptyClass
{
private:
    int value;
public:
    emptyClass();
    ~emptyClass();
    int write(int val);
    int read(void);
};

#endif // EMPTYCLASS_H
