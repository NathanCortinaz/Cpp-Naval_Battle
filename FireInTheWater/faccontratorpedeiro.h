#ifndef FACCONTRATORPEDEIRO_H
#define FACCONTRATORPEDEIRO_H

#include <contratorpedeiro.h>


class facContratorPedeiro
{
public:
    facContratorPedeiro();

    Contratorpedeiro contratorPedeiroInst;

    void setContratorPedeiro(int xa, int ya, int xb, int yb, int xc, int yc)
    {
        contratorPedeiroInst.setA(xa, ya);
        contratorPedeiroInst.setB(xb, yb);
        contratorPedeiroInst.setC(xc, yc);
    }
};

#endif // FACCONTRATORPEDEIRO_H
