/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  29/09/2020             *
*       Define and funcation like macro                   *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

#define     TRUE               1
#define     FALSE              0
#define     MAX_OF_NUM(a,b)    ((a)>(b) ? (a) : (b)) //Funcation like macro
#define     PI                 3.1413
#define     SQUARE(x)          ((x)*(x))             //Funcation like macro


//geri donus degeri 1 vaye 0 olan fonksiyon.
int f1(int ch){
    if(ch >='a' && ch <='z')
        return TRUE;
    return FALSE;
}


int main()
{
    printf("ch :");
    printf("ch : %d\n",f1(getchar()));  //TRUE or FALSE


    double r1,r2;
    printf("Iki sayi gir :");
    scanf("%lf%lf",&r1,&r2);
    double r = MAX_OF_NUM(r1,r2);
    printf("Max number : %f\n",r);

    printf("Daire alan : %f\n",(PI*r*r));

    printf("Karesi alinacak sayi : ");
    double num;
    scanf("%lf",&num);
    printf("Karesi : %f\n",SQUARE(num));


    return 0;
}
