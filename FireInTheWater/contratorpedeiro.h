#ifndef CONTRATORPEDEIRO_H
#define CONTRATORPEDEIRO_H
#include <navio.h>

class Contratorpedeiro
{
public:
    Contratorpedeiro();

    void setA(int xa, int ya);

    void setB(int xb, int yb);

    void setC(int xc, int yc);
private:
    Navio A;
    Navio B;
    Navio C;
};

#endif // CONTRATORPEDEIRO_H
