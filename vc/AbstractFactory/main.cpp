#include "AbstractFactory.h"

int main(void)
{
    DVDFactory dvdFactory;
    CDFactory cdFactory;
    AbstractDisk *dvd = dvdFactory.create();
    AbstractDisk *cd = cdFactory.create();

    dvd->play();
    cd->play();

    return 0;
}