#ifndef FACSUBMARINO_H
#define FACSUBMARINO_H

#include <submarino.h>


class facSubmarino
{
public:
    facSubmarino();

    Submarino submarinoInst;

    void setSubmarino(int xa, int ya, int xb, int yb)
    {
        submarinoInst.setA(xa, ya);
        submarinoInst.setB(xb, yb);
    }
};

#endif // FACSUBMARINO_H
