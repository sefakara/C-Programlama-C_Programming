/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  10/10/2020             *
*     const ifadesi, const pointerlar ve bazi cokboyutlu  *
*     dizilerin adresleri.                                *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

/*
int* ptr;//adres ve icinde tutulan deger degistirilebilir
int* const ptr;//tutulan adres degistirilemez
int const * ptr;//adresin icinde tuttugu deger degistirilemez
int const *const ptr; //hem adres hem de icindeki deger degistirilemez

*/

//yazma amacli :

//nesnenin kopyasi uzerinde degisiklik yapar.
void f3 (int x);

//direk nesne uzerinde degisiklik yapar.
void f2 (int *ptr);

void f4 (int* const ptr){
	int a = 10;
	//ptr = &a;// hata ptr const oldugu icin degistirilemez.
	*ptr = 20;
}


//okuma amacli

// salt okuma amacli. Nesne uzerinde degisiklik yapilamaz.
void f1 (int const *ptr){
	int a = 10;
	ptr = &a;
	//*ptr = 20;  //hata *ptr const oldugu icin degistirilemez.
}


int main (void) {
	//const keyword
	const int num = 10;
	//num +=50;//  hata conts ile tanimlanmis ifadeler degistirilemez, sabittir.
	int x = 20;
	f1(&x);
	f4(&x);

	//c++ typeid operatoru ile cok boyutlu dizilerin ya da karmasik ifadelerin adreslerini tutacak tipler ogrenilebilir
	int a[10][20] = {0};   //&a = int (*) [10][20]   //&a [0] = int (*)[20]   //&a [0][0] = int *

    int(*aptr)[10][20] = &a;
    int(*aptr2)[20] = &a[0];
    int* aptr3 = &a[0][0];

    printf("Adress : %p\n",(aptr)[10][20]);
    printf("Adress : %p\n",(aptr2)[20]);
    printf("Adress : %p\n",&a[0]);

}
