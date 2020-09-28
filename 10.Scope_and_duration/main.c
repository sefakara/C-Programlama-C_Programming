/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  28/09/2020             *
*       Scope kavrami ve nesnelerin omurleri              *
*       Nesneler belli bir zamanda yaratilir ve           *
*       belli bir zamanda yok olurlar.                    *
*       1.Statik omurlu nesneler program calismaya        *
*       baslayinca yaratilir, program bitene kadar        *
*       faaliyet gosterir.                                *
*       2.Dinamik omurlu nesneler belli bir zamanda       *
*       yaratilir ve belli bir sure faaliyet gosterdikten *
*       sonra yok olurlar.                               *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>


//Global namespace
int i;              //i = 0 dir. Statik omurlu.
int num = 70;


void func(){
    int k;          //otomatik omurlu k = cop deger
    static int l;   //statik omurlu.  l = 0
    printf("k : %d\nl : %d\n\n",k,l);
}


void f1(){
    int num = 1;
    ++num;
    printf("num  : %d\n",num);
}

void f2(){
    static int num2 = 1;
    ++num2;
    printf("num2 : %d\n\n",num2);
}

int main()
{
    //Local namespace

    int j; //j = ? dir. Cop deger atanir. Otomatik omurlu.
    printf("i : %d\nj : %d\n",i,j);
    func();

    printf("Statik ve otomatik farki:\n");
    f1();
    f2();
    f1();
    f2();
    f1();
    f2();
    f1();
    f2();

    printf("number : %d\n",num);       //global

    int num = 20;
    printf("number : %d\n",num);       //local1*
    if(1){
        {
            int num = 50;       //faaliyet alani 59-61 sonra yok olur
            printf("number : %d\n",num);
        }
        printf("number : %d\n",num);   //local1*
    }

    printf("number : %d\n",num);

    return 0;
}
