#ifndef NAVIOSTANQUE_H
#define NAVIOSTANQUE_H
#include <navio.h>


class NaviosTanque
{
public:
    NaviosTanque();

    void setA(int xa, int ya);

    void setB(int xb, int yb);

    void setC(int xc, int yc);

    void setD(int xd, int yd);
private:
    Navio A;
    Navio B;
    Navio C;
    Navio D;
};

#endif // NAVIOSTANQUE_H
