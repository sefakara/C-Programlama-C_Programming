/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  22/10/2020             *
*     Yapilar, kullanim alanlari ve ornek uygulamalar     *
*     instruction set, bit alanlari, co boyutlu yapilar,  *
*     yapidan fonksiona gecme gibi yapilarin farkli       *
*     kullanim alanlari.                                  *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>

#define SIZE 3



/*islemcinin kelime uzunlugu
islemcinin bir defada isleyebildigi tamsayi buyuklugu
32 bitlik sistemde 4byte.
64 bitlik sistemde 8byte.*/
typedef struct data {
	char z;  //1 byte
	//3byte bos kaldi. x 4 byte old. icin sigmiyor.
	int x;  //4 byte
	char y; //1byte
}data;
//sizeof(data) = 6byte olmasi gerekirken 12byte. Sistem 32 bit oldugundan bellekte 4'er byte'lik yer ayirir.

typedef struct data2 {
	char z;  //1 byte
	char y; //1byte
	//2byte bos kaldi.
	int x;  //4 byte
}data2;
//sizeof(data) = 6byte olmasi gerekirken 8byte.



/*
Bit Alanlari
Nesnelere bit duzeyinde erismek icin kullanilir.
Kulanim amaci hafizayi daha verimli kullanmak.
*/
typedef struct Date{
    unsigned int day   : 3;     //3bitlik alan  0   7
    unsigned int week  : 6;     //6bitlik alan  0   63
    unsigned int month : 4;     //4bitlik alan  0   15
    signed   int year  : 3;     //3bitlik alan -4   3
}Date;




typedef struct student{
	char name[10];
	char sname[10];
	int age;
	int number;
}student;


typedef struct student2{
	char mname[20];
	char msname[20];
	int mmath[SIZE];
	int maverage;
}student2;

void print(student2 name);
void pointerprint(student2* Ali);



int main (){
	printf ("Init structure and Dot operator \n");
	printf ("************************\n");
	//ilk deger atama
	student s1= {"Kerim","Yigit",20,805}; // ya da
	student s2;                           //ilk deger atamasi yapilmazsa dizilere cop deger atanir. Yeni deger atamak icin strcpy fonk. kullanilabiliir.
	strcpy (s2.name, "Esma");
	strcpy (s2.sname, "Zorlu");
	s2.age = 20;
	s2.number = 796;

	printf ("Name : %s\tSurname : %s \tAge : %d\tNumber : %d\n", s1.name, s1.sname, s1.age, s1.number);
	printf ("Name : %s\tSurname : %s \tAge : %d\tNumber : %d\n", s2.name, s2.sname, s2.age, s2.number);

    printf("\n");


    printf ("Arrays of structures\n");
	printf ("************************\n");
	student students[SIZE] = {{"Turgut","Reis",18,0001}, {"Ali","Reis",18,0002}, {"Oruc","Reis",18,0003}};

	for (int i=0; i<SIZE; ++i){
	    printf("Name : %s\tSurname : %s\t     Age : %d\tNo : %d\n", students[i].name,students[i].sname,students[i].age,students[i].number);
	}

	puts("\n");
	printf ("Instruction set\n");
	printf ("************************\n");

	printf ("size : %u\n", sizeof (s1));
	printf ("size : %u\n", sizeof (data));
	printf ("size : %u\n", sizeof (data2));

	puts("\n");

	printf ("Arrow operator\n");
	printf ("************************\n");
	student* ps1;
	ps1 = &s1;
	ps1-> number = 806;
	ps1-> age = 21;

	printf ("Name : %s\tSurname : %s\t        Age : %d\tNumber : %d\n", ps1->name, ps1->sname, ps1->age, ps1->number);



	puts("\n");

	printf ("Passing struct to function\n");
	printf ("************************\n");
	student2 Ali = {"Ali","Kartal", {60,73,80},((60+73+80)/3)};
	printf ("call by value\n");
	print(Ali);
	printf ("Name : %s\n", Ali.mname);
	printf ("call by reference\n");
	pointerprint(&Ali);
	printf ("Name : %s\n", Ali.mname);

	return 0;
}







//kopyasi uzerinde degisiklik yapar
void print(student2 Ali){
	printf ("Name : %s Surname : %s Math notes : %d %d %d Average : %d\n", Ali.mname, Ali.msname,Ali.mmath[0],Ali.mmath[1],Ali.mmath[2], Ali.maverage);
	strcpy(Ali.mname,"Mehmet");
}

//kendi uzerinde degisiklik yapar
void pointerprint(student2* Ali){
	printf ("Name : %s Surname : %s Math notes : %d %d %d Average : %d\n", Ali->mname, Ali->msname,Ali->mmath[0],Ali->mmath[1],Ali->mmath[2], Ali->maverage);
	strcpy(Ali->mname,"Mehmet");
}
