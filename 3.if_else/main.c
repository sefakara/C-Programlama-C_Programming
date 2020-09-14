/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  15/09/2020             *
*       if else deyimlerinin kullanýmý ve örnekler        *
*       if(ifade)                                         *
*          deyim                                          *
*       ifade=(0) deðilse doðrudur.                       *
*                                                         *
*       "?:" iþleci de if yerine kullanýlabilir.          *
*  						                                  *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int yas;
    //"?:" iþlecinin kullanýmý
    printf("yasinizi giriniz:");
    scanf("%d",&yas);
    printf(yas>=65 ? "yasli birisiniz!\n" : "henuz yasli degilsiniz.");
    */



    /*
    int sayi; //C'de sayi = -155, 14, 1, 100025,-14527 vs. ise dogru 0 ise yanlistir.
    //if kullanimi
    printf("sayi giriniz.");
    scanf("%d",&sayi);
    if(sayi)
        printf("sayi sifirdan farkli.");
    else
        printf("sayi sifira esit");

    */



    /*
    //girilen karakterin buyuk mu kucuk mu oldugunu bulup ASCII kodunu yazan program
    char ch;
    printf("karakter giriniz: ");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
        printf("Girdiginiz kucuk harfin ASCII kodu: %lu",ch);
    else if (ch>='A' && ch<='Z')
        printf("Girdiginiz buyuk harfin ASCII kodu: %lu",ch);
    else
        printf("gecerli harf giriniz.");
    */



    /*
    //üc tam sayidan en buyugunu bulan program
    int num1,num2,num3,max_num;
    printf("uc tam sayi giriniz:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3)
            max_num = num1;
        else
            max_num = num3;
    }
    else{
        if(num2>num3)
            max_num = num2;
        else
            max_num = num3;
        }
    printf("En buyuk sayi: %d",max_num);

    */



    return 0;
}
