#include "SimpleFactory.h"

int main(void)
{
    Creator creator;
    Product* dvd = creator.factory(Creator::TYPE_DVD);
    Product* cd = creator.factory(Creator::TYPE_CD);

    dvd->play();
    cd->play();

    return 0;
}