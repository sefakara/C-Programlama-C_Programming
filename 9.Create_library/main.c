/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  28/09/2020             *
*       Kutuphane olusturma:                              *
*       Bu kisimda ornek bir kutuphane olusturulmustur    *
*       Tanimlamalarin yapildigi .h dosyasý               *
*       Fonksiyonlarin açiklandigi .c dosyasi             *
*                                                         *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"

int main()
{
    printf("Square : %d\n",square(25));
    printf("Max num : %d\n",maxofnum(22,square(5)));
    printf("Fact : %d\n",fact((int)getchar()));



    return 0;
}
