/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  29/09/2020             *
*    #if #elif #else #error #undef #endif   kullanimlari  *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <stdio.h>
#include <stdlib.h>

#define     VERSION     5
#define     TRUE        1



int main()
{
    #if     VERSION>0   && VERSION<=2
    printf("VERSION : %d",VERSION);
    ;
    ;

    #elif   VERSION>2   && VERSION<=4
    printf("VERSION : %d\n",VERSION);
    ;
    ;

    #elif   VERSION>4   && VERSION<=6
    printf("VERSION : %d\n\n",VERSION);
    //#error Versiyon düþük
    ;

    #else
    printf("VERSION : %d\n",VERSION);
    ;
    ;

    #endif // VERSION


    #if     EOF==(-1)       //end of file (Dosya sonu kontrolu
    printf("EOF stdio.h icerisinde %d olarak tanimlanmistir.\n",EOF);
    printf("degistirmek icin baska bir sayi gir : ");
    int num ;
    scanf("%d",&num);

    #undef  EOF

    #define EOF     num
    printf("EOF stdio.h icerisinde %d olarak degistirilmistir.\n",EOF);

    #else
    printf("stdio.h icerisinde %d olarak tanimlanmistir.\n",EOF);
    #endif // EOF


    return 0;
}
