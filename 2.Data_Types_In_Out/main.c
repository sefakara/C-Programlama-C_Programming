/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  14/09/2020             *
*       Veri Tipleri Ve Giriþ-Çýkýþ Ýþlemleri             *
* sizeof() iþleci kullanýlan veri tipinin boyutunu verir. *
*  						                                  *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 170;
    char b ='G';
    double c = 3.14;
    int dsKont;

    printf("Hello World!\n\n\n");

    printf("Karakter kullanimi->\n%c ve "
           "boyu: %lu byte.\n\n", b,sizeof(char));

    printf("Integer kullanimi->\n%d ve "
           "boyu: %lu byte.\n\n", a,sizeof(int));


    printf("Double kullanimi->\n"
           "%lf ve boyu: %lu byte.\n\n\n",c,sizeof(double));


    //getchar() ve putchar() kullanýmýna örnek
    //Dosya sonu kontrolu için define olarak tanýmlanmýþ EOF komutu vardýr.
    //Derleyicimizde EOF = -1 dir.

    dsKont = getchar();
    if (dsKont == EOF)
    {
        putchar(dsKont);
        //dosya sonu ise bu blokdaki iþlemler yapýlýr.
    }


    return 0;
}
