/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  19/09/2020             *
*       Operatörler 1                                     *
*       Bazi operatorlerin kullanimi ve örnekler          *
*  						                                  *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

int main()
{

   /*
    // % kullanimi(mod alma )
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if (num%2 == 0)
        printf("\nSayi cifttir.");
    else
        printf("Sayi tektir.");
    */


    /*
    // ++ -- kullanimi
    int i = 0, j = 0;
    printf("%d\n",i);
    printf("%d\n",j);
    i++;j++;    //i ve j 1 artti
    printf("%d\n",i);
    printf("%d\n\n\n",j);

    printf("%d\n",i++);      // once i yazildi sonra artti
    printf("%d\n",i);        // i artmis hali
    printf("%d\n\n\n",++j);  // j once artti sonra yazildi
    // -- icin de aynisi gecerli
    */


    /*
    //< > >= <= == != kullanimlari
    int num1, num2, num3;
    printf("uc sayi gir:");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1 == num2) // eger icerisi dogruysa (!0) blogun ici gecerli
        ;
    else if(num1 != num2)
        ;
    else if(num1 < num3)
        ;
    else if(num1 > num3)
        ;
    else if(num2 <= num3)
        ;
    else if(num2 >= num3)
        ;
    */


    /*
    // ! || && kullanimlari
    //oncelik tablosundan
    int a = 0, z, ch, x;
    x = 10 + 4 > 5 + !2;        //10+4=14 ve !2=0 ve 5+0=5
    printf("x : %d\n\n",x);       //14>5 ==> 1

    x = x || 0;     //1||0=1
    a = !x || 0;    //x=1 !x=0 ise  0||0=0
    printf("x : %d\na : %d\n\n\n",x,a);


    ch = 'c';                   //c'nin ASCII karsiligi 99
    z = ch >= 'a'  && ch <= 'z';//a'nin 97, z'nin 122
    printf("z : %d",z);         //99 >= 97 ve 99 <= 122 ise z = 1'dir.
    */


    /*
    // ?: kullanimi
    int x;
    char y;
    printf("bir sayi gir : \n");
    scanf("%d",&x);

    y = x%2==0 ? 'c' : 't'; //sayi tek mi cift mi
    printf("sayi : %c",y);
    */


    /*
    //sizepf kullanimi
    printf("sizeof char   : %u\n",sizeof(char));
    printf("sizeof u_char : %u\n",sizeof(unsigned char));
    printf("sizeof int    : %u\n",sizeof(int));
    printf("sizeof uint   : %u\n",sizeof(unsigned int));
    printf("sizeof float  : %u\n",sizeof(float));
    printf("sizeof double : %u\n",sizeof(double));
    */

    return 0;
}
