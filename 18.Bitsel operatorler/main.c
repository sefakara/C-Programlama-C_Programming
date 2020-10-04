/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  04/10/2020             *
*     Bitsel operatorler nasil kullanilir ?               *
*     Bir biti set etmek, reset etmek ve toggle etmek     *
*     icin ne yapilmali?                                  *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

#define SIZE    32

char byte[SIZE] ;
unsigned int num;
int kaydir;

int dectobit (unsigned int num){

	for (int i = SIZE-1; i > 0; --i){
		byte [i] = num % 2;
		num /= 2;
	}

	printf ("\n");

	for (int i = 0; i < SIZE; ++i){
		printf ("%d ", byte [i]);
	}
	return 0;
}

int main (){
	int selection = 0;
	unsigned int d_num, d_num2, b_num;

	printf ("Select an action...\n");
	printf ("1. Shift right\n");
	printf ("2. Shift left\n");
	printf ("3. Bitwise and\n");
	printf ("4. Bitwise or\n");
	printf ("5. Bitwise not\n");
	printf ("6. Bitwise XOR\n");
	printf ("7. Setting a bit\n");
	printf ("8. Clearing a bit\n");
	printf ("9. Toggle a bit\n");
	scanf ("%d",&selection);

	switch (selection){
		case 1:
		    printf ("Enter any number : ");
		    scanf ("%d",&d_num);
		    dectobit (d_num);
		    printf ("\nEnter any bit : ");
		    scanf ("%d",&b_num);
		    printf ("\nresult...");
		    dectobit (d_num >> b_num);
			break;

		case 2:
		    printf ("Enter any number : ");
		    scanf ("%d",&d_num);
		    dectobit (d_num);
		    printf ("\nEnter any bit : ");
		    scanf ("%d",&b_num);
		    printf ("\nresult...");
		    dectobit (d_num << b_num);
			break;

		case 3:
		    printf ("Enter two number : ");
		    scanf ("%d%d",&d_num,&d_num2);
		    dectobit (d_num);
		    dectobit (d_num2);
		    printf ("\nresult...");
		    dectobit (d_num2 & d_num);
			break;

		case 4:
		    printf ("Enter two number : ");
		    scanf ("%d%d",&d_num,&d_num2);
		    dectobit (d_num);
		    dectobit (d_num2);
		    printf ("\nresult...");
		    dectobit (d_num2 | d_num);
			break;

		case 5:
		    printf ("Enter any number : ");
		    scanf ("%d",&d_num);
		    dectobit (d_num);
		    printf ("\nresult...");
		    dectobit (~d_num);
			break;

		case 6:
		    printf ("Enter two number : ");
		    scanf ("%d%d",&d_num,&d_num2);
		    dectobit (d_num);
		    dectobit (d_num2);
		    printf ("\nresult...");
		    dectobit (d_num2 ^ d_num);
			break;

		case 7:
        //bir biti set etmek o biti 1 yapmak anlamina gelir. 1 yapmak icin bitmask kullanilir. 0000 0000 ... 0001 => bitmask
        //once x bit kadar sola kaydirilir sonra 'veya' islemine sokulur.
		    printf ("Enter any number : ");
        	scanf ("%d",&d_num);
        	dectobit (d_num);
        	printf ("\nEnter any bit : ");
        	scanf ("%d",&b_num);
        	d_num |= (1 << b_num);
        	dectobit (d_num);
		    break;

		case 8:
        //bir biti reset etmek o biti 0 yapmak anlamina gelir. 0 yapmak icin bitmask kullanilir. 0000 0000 ... 0001 => bitmask
        //bitmask once x bit kadar sola kaydirilir sonra degili alinir ve 've' islemine sokulur.
		    printf ("Enter any number : ");
        	scanf ("%d",&d_num);
        	dectobit (d_num);
        	printf ("\nEnter any bit : ");
        	scanf ("%d",&b_num);
        	d_num &= ~(1 << b_num);
        	dectobit (d_num);
		    break;

		case 9:
        //bir biti toggle etmek o bitin tersini  almak anlamina gelir. Toggle etmek icin bitmask kullanilir. 0000 0000 ... 0001 => bitmask
        //once x bit kadar sola kaydirilir sonra 'xor' islemine sokulur.
		    printf ("Enter any number : ");
        	scanf ("%d",&d_num);
        	dectobit (d_num);
        	printf ("\nEnter any bit : ");
        	scanf ("%d",&b_num);
        	d_num ^= (1 << b_num);
        	dectobit (d_num);
		    break;

		default :
		printf ("invalid transaction...\n");
	}

	return 0;
}
