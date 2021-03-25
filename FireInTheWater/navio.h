#ifndef NAVIO_H
#define NAVIO_H


class Navio
{
public:
    Navio();
    int getX() const;
    void setX(int cx);

    int getY() const;
    void setY(int cy);

private:
    int x;
    int y;

};

#endif // NAVIO_H
