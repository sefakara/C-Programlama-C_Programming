/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  13/10/2020             *
*     string.h kutuphanesi icindeki siklikla kullanilan   *
*     bazi fonksiyonlar.                                  *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 50

void comparison (const int result);

int main (){
	char s1[SIZE];
	char s2[SIZE];
	char s3[SIZE] = "word!";
	char s4[SIZE];
	char s5[SIZE];

	printf ("**************************\n");
	printf ("strcpy\n");
	strcpy (s1,"Hello");
	puts (s1);

	printf ("\n");

	strcpy (s2, s1);
	puts (s1);
	puts (s2);

	printf ("**************************\n");
	printf ("strlen\n");
	printf ("s1 size : %d\n", strlen (s1));   //s1 dizisinin baslangic adresi gonderiliyor
	printf ("s1 size : %d\n", strlen (s1+2));   //s1 dizisinin 2.indisinin adresi gonderiliyor
	printf ("string size : %d\n", strlen ("C programlama"));

	printf ("**************************\n");
	printf ("strcat\n");
	puts (s1);
	puts (s3);
	strcat (s1, s3);
	puts (s1);
	puts (s3);

	printf ("**************************\n");
	printf ("strchar\n");
	puts (s1);
	char* ptr = strchr (s1,'o');//soldan saga dogru bakar
	if (ptr == NULL)
	    printf ("character isn't find!\n");
	else
	    printf ("character is find\n");

	printf ("\nEnter any character for s1 : ");
	ptr = strrchr (s1,getchar());//sagdan sola dogru bakar
	if (ptr == NULL)
	    printf ("character isn't find!\n");
	else
	    printf ("character is find\n");

	getchar ();    //buffer
	printf ("**************************\n");
	printf ("strstr\n");
	printf ("Enter first string :");
	gets (s4);
	printf ("Enter second string :");
	gets (s5);
	ptr = strstr (s4, s5);
	if (ptr == NULL)
	    printf ("string isn't find!\n");
	else
	    printf ("string is find!\n");


	printf ("**************************\n");
	printf ("strcmp\n");

	strcpy (s1, s2);
	comparison(strcmp (s1, s2));//s1=Hello s2=Hello
	strcpy (s1, "hello");
	comparison(strcmp (s1, s2));//s1=hello s2=Hello
//h > H	   h = H+32 ise s1>s2 dir


	return 0;
}


void comparison (const int result){
	if (result>0)
	    printf ("s1 buyuk\n");
	else if (result<0)
	    printf ("s2 buyuk\n");
	else
	    printf ("esit\n");
}
