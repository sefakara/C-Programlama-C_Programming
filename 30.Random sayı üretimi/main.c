/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  29/10/2020             *
*     Rasgele sayi uretimi                                *
*     iki fonksiyon yeterlidir. Prototip bildirimleri :   *
*                                                         *
*     void srand(unsigned int);//her seferinde farkli     *
*     deger üretmek icin unsigned int degisken olmali.    *
*                                                         *
*     int rand(void);                                     *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define     SIZE    6

int main()
{
	int a[SIZE];
	int x;
	srand(time(0));

	//1 ile 6 arasinda 10 adet rasgele rakam
	printf("1 ile 6 arasi rasgele rakam uretim\n");
	for(int i=0;i<10;++i){
		x = 1 + rand()%6;
		printf ("%d ", x);
	}
	printf ("\n\n");


	printf("1 ile 100 arasi 10 defa rasgele dizi uretimi\n");
	for (int j=0; j < 10;++j){
        for (int i=0; i < SIZE; ++i)
            a[i] = 1 + rand()%100;
        for (int i=0 ; i < SIZE; ++i)
            printf ("%02d ", a[i]);
        printf ("\n");
	}

    printf("\n\n");

	printf ("SAYI TAHMIN OYUNU\n");
	int bil_secim = 1 + rand()%100;
	int tahmin,count = 1;
	while(1){
		printf ("Tahmin giriniz : ");
		scanf ("%d",&tahmin);

		if (tahmin < bil_secim)
		    printf ("Cik\n");

		else if (tahmin > bil_secim)
		    printf ("In\n");

		else{
		    printf ("TEBRIKLER\n");
		    printf("%d denemede buldunuz.",count);
		    break;
		}
		count++;
	}

	return 0;
}
