#include "coordenadas.h"

void coordenadas::converte(QList<QTableWidgetSelectionRange> coord_legado, int* coordenadas)
{
    int pa = 0;
    for(int size = 0; size < 4; size++)
    {
        int lA = coord_legado.at(size).topRow();
        int cA = coord_legado.at(size).leftColumn();
        int lB = coord_legado.at(size).bottomRow();
        int cB = coord_legado.at(size).rightColumn();
        if(lA == lB)
        {
            for(int aux = cA; aux < (cB+1); aux++)
            {
                coordenadas[pa++] = lA;
                coordenadas[pa++] = aux;

            }
        }
        else
        {
            for(int aux = lA; aux < (lB+1); aux++)
            {
                coordenadas[pa++] = aux;
                coordenadas[pa++] = cA;
            }
        }
    }
    QString coord;
    for(int test = 0; test < 28; test++)
    {
        coord = coord + QString("(%1, %2) ").arg(coordenadas[test]).arg(coordenadas[test+1]);
        test++;
    }
}
