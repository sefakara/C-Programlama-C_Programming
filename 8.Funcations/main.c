/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  25/09/2020             *
*       Funcations :                                      *
*       <type> <funt. name> (parameters){                 *
*           ...                                           *
*       }                                                 *
*       fonksiyon kullanimlari ve ornekler                *
*                                                         *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>


int sum(int x, int y){
    int result = x + y;
    return result;
}


int fact(int num){
    int result = 1;
    while(num){
        result = result * num;
        num--;
    }
    return result;
}


int abs_num(int num){
    if(num<0)
        return -num;
    return num;
}


void yaz(void){
    printf("void fonk. geri deger gondermeyen bir fonksiyondur.\n"); 
    printf("int fonk. geri deger gonderen bir fonksiyondur.\n\n\n");
}


void swap_referance(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void swap_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}



int main()
{

    yaz();
    int num;
    int rst1 = sum(5,7);
    printf("Sum : %d\n",rst1);
    printf("Fact : %d",fact(6));

    printf("\n\n\nSayi giriniz : ");
    scanf("%d",&num);
    printf("Mutlak deger : %d",abs_num(num));



    //Call by value and call by referance
    int a = 10, b = 20;

    printf("\n\n\na : %d, b : %d",a,b);
    swap_value(a,b);                        // deger ile cagirma
    printf("\na : %d, b : %d",a,b);


    printf("\n\n\na : %d, b : %d",a,b);
    swap_referance(&a,&b);                  // referans ile cagirma
    printf("\na : %d, b : %d",a,b);




    return 0;
}
