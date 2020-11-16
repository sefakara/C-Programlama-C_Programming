/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  16/11/2020             *
*   union'lar                                             *
*   struct ve union kullanimlari birbiriyle ayni.         *
*   Aralarindaki fark struct'ta her veri ayri hafizaya    *
*   yerlesir. union'da hangisinin alani en buyuk ise onun *
*   alani gecerli olur. union'da tek seferde sadece bir   *
*   veri turune deger atanabilir. Digerlerini kullanmak   *
*   icin bir onceki temizlenmeli.                         *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

//64 bit mi?

//Tek seferde 64 bit veri isleyebiliyorsa her seferinde 8byte' lik alanlar olusturulur.
//Sirayla yerlestirilir. Sigmayacaksa yeni bir 8byte'lik alan olusturulur.

typedef struct Sdata {
	int x, y; //4 + 4 = 8 byte //8byte' lik alana x ve y yerlesti.
	double z; //8 byte //8byte' lik alana z yerlesti.
	char s2[10];//10 byte //6byte bosta kaldi. //8byte' lik alana ilk 8 eleman yerlesti. Yeni acilan 8 byte'lik alana kalan 2byte yerlesti. 6byte bosta kaldi.
	char s1; //1 byte // 6byte'tan 5 byte kaldi.
	//toplam = 8 + 8 + 16 = 32byte
	//5 byte bosta
}Sdata;


typedef union Udata {
	int x; //4 byte
	int y; //4 byte
	double z; // 8 byte
	char s2[12]; //12byte //16byte'lik yer acildi. 4byte bosta.
	char s1; //1byte //4byte'tan 3byte kaldi
	//toplam => en buyuk alana hangisi sahipse onun alani = 16byte
}Udata;



int main (){

	Sdata Str;
	Sdata* Sptr;
	Udata Uni;


	printf ("Struct is %u byte.\n", sizeof (Sdata));
	printf ("%p\n", &Str.x);
	printf ("%p\n", &Str.y);
	printf ("%p\n", &Str.z);
	printf ("%p\n", Str.s2);
	printf ("%p\n", Str.s1); //bilgisayarda bak
	printf ("%p\n", &Str);

    printf ("**************\n");
    printf ("Union is %u byte.\n", sizeof (Udata));
	printf ("%p\n", &Uni.x);
	printf ("%p\n", &Uni.y);
	printf ("%p\n", &Uni.z);
	printf ("%p\n", Uni.s2);
	printf ("%p\n", Uni.s1);
	printf ("%p\n", &Uni);

	puts ("\n");

	Uni.z = 10.2;
	printf ("%d\n", Uni.x);
	printf ("%d\n", Uni.y);
	printf ("%lf\n", Uni.z);
	printf ("%s\n", Uni.s2);
	printf ("%c\n", Uni.s1);
	//Sadece double degerlere atama yapilir.


	Uni.x= 11;
	printf ("%d\n", Uni.x);
	printf ("%d\n", Uni.y);
	printf ("%ld\n", Uni.z);
	printf ("%s\n", Uni.s2);
	printf ("%c\n", Uni.s1);
	//atama yapilmaz cunku o bolgeyi 'z' kullaniyor.


	Sptr->x = 20;
	printf ("%d\n", Uni.x);
	printf ("%d\n", Uni.y);
	printf ("%ld\n", Uni.z);
	printf ("%s\n", Uni.s2);
	printf ("%s\n", Uni.s1);

	return 0;
}
