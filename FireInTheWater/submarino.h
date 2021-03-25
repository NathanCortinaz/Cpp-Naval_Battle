#ifndef SUBMARINO_H
#define SUBMARINO_H
#include <navio.h>

class Submarino
{
public:
    Submarino();

    void setA(int xa, int ya);

    void setB(int xb, int yb);

private:
    Navio A;
    Navio B;

};

#endif // SUBMARINO_H
