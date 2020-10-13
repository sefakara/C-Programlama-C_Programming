/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  13/10/2020             *
*     string lerlin kullanimlari ve ornek uygulamalar     *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>


void myputs(const char* str);
void myputs2 (const char* str);
char* mygets(char* str);


int main (void) {
	char name[] = "hello";    //6 byte 5.indis null karakteri
	char name2[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	printf ("name : %s\t", name);
	printf ("size : %u\n", sizeof (name));
	printf ("name : %s\t", name2);
	printf ("size : %u\n", sizeof (name2));

	name[0] = 'd';
	printf ("name : %s\n", name);
	name[5] = 'm';              //son karakter null olmali
	printf ("name : %s\n", name);

	char name3[10];
	char surname3[10];
	printf ("adiniz soyadiniz : ");
	scanf ("%s %s", name3, surname3);
	printf ("%s %s\n", name3, surname3);
	puts(name3); //
	puts (surname3);

    printf ("***************************\n");

    myputs ("hello word!");
    myputs2 ("hello word!");

    char get[10];
    mygets(get);
    myputs(get);

}


void myputs(const char* str){
	while(*str != '\0')
	    putchar (*str++);
	putchar ('\n');
}

void myputs2(const char* str){
	for (int i=0; *str !='\0'; i++){     //for (int i=0; str[i]!='\0'; i++)
        putchar (*str);                  //putchar (str[i])
	    *str++;
	}
	putchar ('\n');
}

char* mygets(char* str){
    int ch;
    char* temp = str;
    getchar();           //buffer
    while((ch = getchar()) != '\n')
        * str++ =(char)ch;
    *str = '\0';
    return temp;
}
