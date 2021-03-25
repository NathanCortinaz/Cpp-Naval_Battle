#ifndef FACPORTAAVIOES_H
#define FACPORTAAVIOES_H
#include <portaavioes.h>

class facPortaAvioes
{
public:
    facPortaAvioes();

    PortaAvioes portaAvioesInst;

    void setPortaAvioes(int xa, int ya, int xb, int yb, int xc, int yc, int xd, int yd, int xe, int ye)
    {
        portaAvioesInst.setA(xa, ya);
        portaAvioesInst.setB(xb, yb);
        portaAvioesInst.setC(xc, yc);
        portaAvioesInst.setD(xd, yd);
        portaAvioesInst.setE(xe, ye);
    }
};

#endif // FACPORTAAVIOES_H
