#include "navio.h"

Navio::Navio()
{
 int x=0;
 int y=0;
}

int Navio::getX() const
{
    return x;
}

void Navio::setX(int cx)
{
    x = cx;
}

int Navio::getY() const
{
    return y;
}

void Navio::setY(int cy)
{
    y = cy;
}
