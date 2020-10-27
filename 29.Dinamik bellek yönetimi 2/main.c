/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  27/10/2020             *
*    Dinamik Bellek Yonetimi                              *
*    malloc, calloc ve free fonksiyonlarinin kullanimlari2*
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

int* init_array(int len, size_t size);

int main () {

	printf ("Bellek boyutu giriniz : \n");
	int len;
	scanf("%d",&len);

	int* ptr = (int*) malloc( sizeof(int) * len );
	if (ptr == NULL){
		printf ("Bellek tahsil edilemedi...\n");
		exit(1);
	}
	printf ("%d byte alan tahsil edildi...\n", len * sizeof(int));


    //cop degerli malloc
	for (int i=0; i<len; ++i){
	    printf ("Adres : %p\t Deger : %d\n", &ptr[i], ptr[i]);
	}
	printf("\n");

    //atama islemi
	for (int i=0; i<len; ++i)
		ptr[i] = i;

	for (int i=0; i<len; ++i){
	    printf ("Adres : %p\t Deger : %d\n", &ptr[i], ptr[i]);
	}
	printf("\n");

	free (ptr);
    //alan free edildikten sonra bellekte yazilan
	for (int i=0; i<len; ++i){
	    printf ("Adres : %p\t Deger : %d\n", &ptr[i], ptr[i]);
	}

	puts("\n");



	size_t size;;
	printf ("Atanacak sayiyi giriniz : \n");
	scanf("%d",&size);
	int* ptr_init = init_array(len, size);
	for (int i=0; i<len; ++i)
	    printf ("Deger : %d\n", ptr_init[i]);
	free (ptr_init);

	return 0;
}



int* init_array(int len, size_t size){
	int* ptr = (int*) malloc( sizeof(int) * len );
	if (!ptr){
		printf ("Bellek tahsil edilemedi...\n");
		exit(1);
	}
	printf ("%d byte alan tahsil edildi...\n", len * sizeof (int));

	for (int i=0; i<len; ++i)
		*(ptr+i) = size;
	return ptr;
}
