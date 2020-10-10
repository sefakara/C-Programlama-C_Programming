/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  10/10/2020             *
*     Pointerlar nasil kullanilir ?                       *
*     Pointerlarda artirma-azaltma, referans ile cagirma, *
*     fonksiyondan adres donderme vb. kullanim            *
*     sekillerinin gosterimi.                             *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>


#define SIZE    5



void func(int a){
	a = 20;
}

void func2(int *a){
	*a = 20;
}

int* psquare (int* bptr){
	*bptr = (*bptr) * (*bptr);
	return bptr;
}

int* psum (int* c, int* d){
	static int result;
	result = (*c) + (*d);
	return &result;
}


int main (void ) {

	int x = 20, y = 40;
	int* xptr = &x;

    //adres gostermenin yolu
	printf ("%p \n", xptr);
	printf ("%p \n", &x);
	//adresteki degeri gostermenin yolu
	printf ("%d \n", *xptr);
	printf ("%d \n", x);

	printf ("\n");

	*xptr += 2;     //*xptr = 20 ve *xptr = *xptr + 2
	printf ("%p \n", xptr);     //adres
	printf ("%d \n", *xptr);    //adresteki deger
	printf ("%d \n", x);

	printf ("\n");

    xptr = &y;      //adres atama
	printf ("%p \n", xptr);
	printf ("%p \n", &y);
	printf ("%d \n", *xptr);
	printf ("%d \n", y);

	printf ("************************\n");

	printf("call by value\n");
	int a = 10;
	printf ("a : %d\n",a);
	func (a);       //a'nin kopyasi uzerinde degisiklik yapar
	printf ("a : %d\n",a);

	printf ("with call by reference\n");
	int a2 = 10;
	printf ("a2 : %d\n",a2);
	func2 (&a2);    //a'nin uzerinde degisiklik yapar
	printf ("a2 : %d\n",a2);

	printf ("************************\n");

	//hicbir nesneyi isaret etmeyen, gostermeyen pointer
	int *nptr = NULL;
	printf ("NULL pointer\n");
	printf ("Adress : %p\n", nptr);

	printf ("************************\n");

	int k = 30;
	printf ("Returning a pointer from a function\n");
	int *result = psquare(&k);
	printf ("Address : %p\n", &k); //kopyasi uzerinde degil direk kendisi uzerinde degisiklik yapiyor
	printf ("Address : %p\n", result);
	printf ("Result : %d\n", *result);

	printf ("************************\n");
	int c = 10, d = 15;
	int *sum = psum (&c, &d);
	printf ("Sum : %d\n", *sum);

	printf ("************************\n");

	printf ("Array to pointer conversion\n");
	int b[SIZE] = {10,20,30,40,50};
	int* bptr = b;
	int* bptr2 = &b[0];
	printf ("Address : %p\n", &b[0]);
	printf ("Address : %p\n", bptr);
	printf ("Address : %p\n", bptr2);
	printf ("b[0] : %d\n",*bptr2);
	*bptr2 = 100;
	printf ("b[0] : %d\n",*bptr2);

	printf ("************************\n");

	printf ("Pointer arithmetic and index operator\n");
	bptr = b+2;//&b[2]
	printf ("bptr : %p\n",bptr);
	printf ("b[2] : %p\n",&b[2]);
	printf ("b[1] : %d\n",*(bptr2+1));
	*(bptr2+1) = 200;
	printf ("b[1] : %d\n",*(bptr2+1));

	printf ("************************\n");

	printf ("Comparing pointers\n");
	for (int i=0; i<SIZE; i++){
		printf ("i=%d %p %p %d %d \n", i, &b[i], (b + i), b[i], *(b + i) );
	}
	printf ("\n");
	int* end_bptr = b + SIZE;
	while (bptr2 < end_bptr)
	    printf ("%d ", *bptr2++);

	printf ("\n");
	printf ("\n%p\n", bptr2);
	printf ("%p\n", bptr2++); //once adresi yazar sonra artirir
	printf ("%p\n", bptr2);
    printf ("%p\n", ++bptr2);//once artirir sonra yazar
}
