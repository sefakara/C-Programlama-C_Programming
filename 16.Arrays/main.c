/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  02/10/2020             *
*     tek boyutlu dizi kullanimi ve birkac ornek          *
*                                                         *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE     6


int arrey4 [SIZE] = {}; //atama yapilmazsa  '0'
int arrey5 [SIZE] = {100,200}; //atama yapilmayanlar  '0'
int arrey6 [SIZE] = { [2] = 21, [4] = 42}; //atama yapilmayanlar  '0'

int main () {

    int arrey1[SIZE] ;
	int arrey2 [] = {10,20,30,40,50,60};
	int arrey3 [SIZE]; //atama yapilmazsa cop deger

	printf ("Enter six numbers :\n");
	for (int i = 0; i<SIZE ; i++)
		scanf ("%d",&arrey1 [i]);
    printf ("arrey1\n");
	for (int i = 0; i<SIZE ; i++)
	    printf ("%d : %d\n", i+1, arrey1 [i]);

	printf ("\narrey2\n");
    for (int i = 0; i<SIZE ; i++)
        printf ("%d : %d\n", i+1, arrey2 [i]);

    printf ("\narrey3\n");
    for (int i = 0; i<SIZE ; i++)
        printf ("%d : %d\n", i+1, arrey3 [i]);

    printf ("\narrey4\n");
    for (int i = 0; i<SIZE ; i++)
        printf ("%d : %d\n", i+1, arrey4 [i]);

	printf ("\narrey5\n");
    for (int i = 0; i<SIZE ; i++)
        printf ("%d : %d\n", i+1, arrey5 [i]);

	printf ("\narrey6\n");
    for (int i = 0; i<SIZE; i++)
        printf ("%d : %d\n", i+1, arrey6 [i]);





    printf ("\n\nDizide rastgele uretilmis sayilari baska bir diziye kopyalama...\n");

    srand (time (NULL));

    int source[SIZE];
    int dest [SIZE];

    for (int i = 0; i<SIZE ; i++){
    	source[i] = rand() % 10;
        printf ("%d : %d\n", i+1, source [i]);
    }
    printf ("\n\n");
    for (int i = 0; i<SIZE ; i++){
    	dest[i] = source[i];
        printf ("%d : %d\n", i+1, source [i]);
    }



    printf ("\n\nDizideki elemanlarin yerlerini degistirme...\n");
    for (int i = 0; i<SIZE ; i++){
    	source[i] = rand() % 50;
        printf ("%d : %d\n", i+1, source [i]);
    }

    for (int i = 0; i<SIZE/2; i++){
    	int temp = source[i];
    	source[i] = source[SIZE - 1 - i];
    	source[SIZE -1 - i] = temp;
    }
    printf ("\n");
    for (int i = 0; i<SIZE ; i++)
        printf ("%d : %d\n", i+1, source [i]);



    int sum = 0;
	printf ("\n\nDizideki 3'un kati olan elemanlarin toplami...\n");
	for (int i = 0; i<SIZE; i++){
    	source[i] = rand() % 10;
        printf ("%d : %d\n", i+1, source [i]);
        if ((source[i] % 3)==0)
            sum+=source[i];
    }
    printf ("Sum : %d\n\n", sum);


/*
    int rate [SIZE] = {0,0,0,0,0,0};
    printf ("Zardaki sayilarin gelme olasiligi\n");
    int x = 10000;
    while (x--){
    for (int i = 0; i<SIZE ; i++){
    	source[i] = 1+ rand() % 6;
        printf ("%d.atis : %d\n", i+1, source [i]);
        if (source [i] == 1)
            rate [0]++;
        else if (source [i] == 2)
            rate [1]++;
        else if (source [i] == 3)
            rate [2]++;
        else if (source [i] == 4)
            rate [3]++;
        else if (source [i] == 5)
            rate [4]++;
        else if (source [i] == 6)
            rate [5]++;
    }}
    printf ("\n");
    for (int i = 0; i<SIZE ; i++)
        printf ("%d' den : %d tane\n", i+1, rate [i]);


    for (int i = 0; i<SIZE ; i++)
        printf ("%d gelme olasiligi : %f\n", i+1, (float)rate [i]/10000); //sonsuza giderken her sayinin gelme olasiligi birbirine esittir.
*/


    int max_num, min_num;
    printf ("\n\nDizideki en buyuk ve en kucuk sayiyi bulma...\n");
    for (int i = 0; i<SIZE ; i++){
    	source[i] = rand() % 50;
        printf ("%d : %d\n", i+1, source [i]);
    }
    max_num = source [0];
    for (int i =1 ; i < SIZE ; i++){
    	if (source [i] > max_num)
    		max_num = source [i];
    }
    printf ("max_num : %d\n", max_num);

    min_num = source [0];
    for (int i =1 ; i < SIZE ; i++){
    	if (source [i] < min_num)
    		min_num = source [i];
    }
    printf ("min_num : %d\n", min_num);

    return 0;
}
