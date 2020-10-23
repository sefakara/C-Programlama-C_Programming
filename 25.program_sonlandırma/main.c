/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  23/10/2020             *
*     Program sonlandirma cesitleri                       *
*     ve bu komutlarin kullanimlari                     *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

/*
C programi iki sekilde sonlandirilir.


1. Normal termination
exit fonksiyonuna yapilan cagri ile sonlanir
Bazi islemleri yaptiktan sonra sonlandirir.
void exit (int statues);
0 basari, 1 basarisizlik
stdlib 'de  0 icin EXIT_SUCCESS,
            1 icin EXIT_FAILURE, makrolari tanimlanmistir.
exit (EXIT_SUCCESS);
exit (EXIT_FAILURE);


2. Abnormal termination
abort fonksiyonuna yapilan cagri ile sonlanir.
Direk sonlandirir.



return fonksiyonu sonlandirir.exit direk programi sonlandirir.

*/


void f1 (){
	printf ("f1 fonksiyonu\n");
	exit (EXIT_SUCCESS);
}

void f2 (){
	printf ("f2 fonksiyonu\n");
	exit (EXIT_FAILURE);
}



int main () {

/*
// exit blogu
{
	f1 ();
	f2 ();
	printf ("Hello word!\n");
	exit (0);
}
*/



/*
//atexit blogu
    {
        atexit (f2);    //calismasi icin f(2) ve f(1) fonksiyonlarindan exit() kaldirilmali
        atexit (f1);
        printf ("Hello word!\n");
        exit (0);
	//program sonlandiktan sonra(exit ()) sondan baslayarak taslaklar calistirilir.
    }
*/

// int main() fonksiyonunu sonlandiran return 0 = exit(0) dir.


/*
//abort blogu
{
	atexit (f2);    //calismasi icin f(2) ve f(1) fonklarindan exit() kaldirilmali
    atexit (f1);
    printf ("Hello word!\n");
	abort ();
}
*/

    return 0;
}
