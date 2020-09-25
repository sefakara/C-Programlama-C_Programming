/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  25/09/2020             *
*       Tur donusumu:                                     *
*       (tur)degisken ya da sabit                         *
*                                                         *
*       tur donusumu kullanimi ve ornekler                *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    double result;
    printf("Iki sayi gir : \n");
    scanf("%d%d",&num1,&num2);
    result = (double)num1/num2;
    printf("Sonuc : %f\n\n\n",result);


    float x, y, z;
    int i = 71 , j = 3;
    x = (float) i;
    y = (float) (i/j);
    z = (float) i /(float) j;
    i = (int) (x * (float) j);
    printf("x : %f\n",x);
    printf("y : %f\n",y);
    printf("z : %f\n",z);
    printf("i : %d\n",i);

    return 0;
}
