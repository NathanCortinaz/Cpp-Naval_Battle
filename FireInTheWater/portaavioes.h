#ifndef PORTAAVIOES_H
#define PORTAAVIOES_H
#include <navio.h>

class PortaAvioes
{
public:
    PortaAvioes();
    void setA(int xa, int ya);

    void setB(int xb, int yb);

    void setC(int xc, int yc);

    void setD(int xd, int yd);

    void setE(int xe, int ye);
private:
    Navio A;
    Navio B;
    Navio C;
    Navio D;
    Navio E;
};

#endif // PORTAAVIOES_H
