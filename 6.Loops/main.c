/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  20/09/2020             *
*       Loops :                                           *
*       while (control expression) //non ZERO TRUE        *
*  						           //ZERO FALSE           *
*       do{                                               *
*       }while(control expression);                       *
*                                                         *
*       for(exp1;exp2;exp3){                              *
*       }                                                 *
*                                                         *
*       break and continue                                *
*       deyim ve dongulerin kullanimi ve ornekler         *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //ardisik sayilarin toplami while dongusu ile
    int num, sum = 0;
    printf("Enter the number to sum: ");
    scanf("%d",&num);
    num++;
    while(num--)
        sum = num + sum;
    printf("sum : %d",sum);
    */


    /*
    //ardisik sayilarin toplami do while dongusu ile
    int num, sum = 0;
    printf("Enter the number to sum: ");
    scanf("%d",&num);
    do
        sum = num + sum;
    while(num--);
    printf("sum : %d",sum);
    */



    /*
    //ardisik sayilarin carpimi
    int num, fact = 1;
    printf("Enter the number to fact: ");
    scanf("%d",&num);
    while(num>0){
        fact *= num;
        num--;
    }
    printf("fact : %d",fact);
    */



    /*
    //ic ice dongu ornegi
    int st;
    printf("satir sayisi : ");
    scanf("%d",&st);
    for(int i=1;i<=st;++i){
        for(int j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
    */



    /*
    // q karakterine basilinca sonlanan dongu
    char ch;
    while ((ch = getchar())!='q'){
        printf("%c",ch);
    }
    */



    /*
    //break deyimi kullanimi
    char  ch;
    for(;;){
        ch = getchar();
        if (ch == 'q')    // kosul saglanirsa sonsuz dongu kirilir
            break;
    }
    */



    /*
    //ASCII karakter kodunu ekrana yazan program
    int k;
    for(k=0;k<256;++k){
        printf("%c\n",k);
    }
    */



    /*
    // continue deyimi 1-100 arasinda 7'nin katlari
    for (int x=1;x<100;x++){
        if (x%7) //x%7==0 ise if'e girmez
            continue;
        printf("%d\n",x);
    }
    */

    return 0;
}
