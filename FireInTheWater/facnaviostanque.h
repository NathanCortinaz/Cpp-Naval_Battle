#ifndef FACNAVIOSTANQUE_H
#define FACNAVIOSTANQUE_H

#include <naviostanque.h>


class facNaviosTanque
{
public:
    facNaviosTanque();

    NaviosTanque naviosTanqueInst;

    void setNaviosTanque(int xa, int ya, int xb, int yb, int xc, int yc, int xd, int yd)
    {
        naviosTanqueInst.setA(xa, ya);
        naviosTanqueInst.setB(xb, yb);
        naviosTanqueInst.setC(xc, yc);
        naviosTanqueInst.setD(xd, yd);
    }
};

#endif // FACNAVIOSTANQUE_H
