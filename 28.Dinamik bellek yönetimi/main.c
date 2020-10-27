/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  27/10/2020             *
*     Dinamik Bellek Yonetimi                             *
*     malloc, calloc ve free fonksiyonlarinin kulanimlari *
*     ilk deger atamasi, max heap bulunmasi               *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <stdio.h>
#include <stdlib.h>


int main (){

    //malloc fonksiyonu
    //void* malloc(size_t);
	int* mptr =(int*) malloc (20);
	if (mptr == NULL){
	    printf ("Basarisiz...\n");
	    exit (1);
	}

	printf ("%d \t%d \t%d \t%d\n",*mptr,*(mptr+1),*(mptr+2),mptr[3]);
	*mptr = 10;
	*(mptr+1) = 20;
	mptr[2] = 30;
	*(mptr+3) = 40;
	printf ("%d\t\t%d\t\t% d\t\t%d\n",*mptr,*(mptr+1),*(mptr+2),mptr[3]);
    free(mptr); //Kullanilan bellek alanini geri iade eder.

	puts ("\n");



/*
	//Bellekte tahsis edilebilecek toplam alan
	long t = 0;
	char *p;
	for ( ;; ){
		p = malloc (1024);
		if (p == NULL)
		    break;
		t += 1024;
	}
	printf("Bellekte tahsis edilebilecek toplam alan (heap) : %ld \n",t);
	free(p);
*/



    //calloc fonksiyonu
    //void* calloc(size_t,size_t);
    //malloc fonksiyonundan farki cop degerle hayata gelmez, '0' ile gelir.
	int* cptr =(int*) calloc (4,sizeof(int));
	if (cptr == NULL){
	    printf ("Basarisiz...\n");
	    exit (1);
	}
	printf ("%d \t%d \t%d \t%d\n",*cptr,*(cptr+1),*(cptr+2),*(cptr+2));
    free(cptr);




	return 0;
}
