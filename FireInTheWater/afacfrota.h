#ifndef AFACFROTA_H
#define AFACFROTA_H

#include <faccontratorpedeiro.h>
#include <facnaviostanque.h>
#include <facportaavioes.h>
#include <facsubmarino.h>

class AfacFrota
{
private:

    static AfacFrota* instance;

    void setFrota (int sxa, int sya, int sxb, int syb,
                   int cxa, int cya, int cxb, int cyb, int cxc, int cyc,
                   int nxa, int nya, int nxb, int nyb, int nxc, int nyc, int nxd, int nyd,
                   int pxa, int pya, int pxb, int pyb, int pxc, int pyc, int pxd, int pyd, int pxe, int pye)
    {
        submarinoInst.setSubmarino(sxa, sya, sxb, syb);

        contratorPedeiroInst.setContratorPedeiro(cxa, cya, cxb, cyb, cxc, cyc);

        naviosTanqueInst.setNaviosTanque(nxa, nya, nxb, nyb, nxc, nyc, nxd, nyd);

        portaAvioesInst.setPortaAvioes(pxa, pya, pxb, pyb, pxc, pyc, pxd, pyd, pxe, pye);
    }

public:

    static AfacFrota* getInstance(int sxa, int sya, int sxb, int syb,
                                  int cxa, int cya, int cxb, int cyb, int cxc, int cyc,
                                  int nxa, int nya, int nxb, int nyb, int nxc, int nyc, int nxd, int nyd,
                                  int pxa, int pya, int pxb, int pyb, int pxc, int pyc, int pxd, int pyd, int pxe, int pye);

    facSubmarino submarinoInst;
    facContratorPedeiro contratorPedeiroInst;
    facNaviosTanque naviosTanqueInst;
    facPortaAvioes portaAvioesInst;


};


#endif // AFACFROTA_H
