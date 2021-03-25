#include "afacfrota.h"

AfacFrota* AfacFrota::instance = 0;

AfacFrota* AfacFrota::getInstance(int sxa, int sya, int sxb, int syb, int cxa, int cya, int cxb, int cyb, int cxc, int cyc, int nxa, int nya, int nxb, int nyb, int nxc, int nyc, int nxd, int nyd, int pxa, int pya, int pxb, int pyb, int pxc, int pyc, int pxd, int pyd, int pxe, int pye)
{
    if (instance == 0)
    {
        instance = new AfacFrota();
        //sxa, sya, sxb, syb, cxa, cya, cxb, cyb, cxc, cyc, nxa, nya, nxb, nyb, nxc, nyc, nxd, nyd, pxa, pya, pxb, pyb, pxc, pyc, pxd, pyd, pxe, pye);
    }

    return instance;
}

