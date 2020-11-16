/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  16/11/2020             *
*   Komut Satiri Argumanlari                              *
*   Eger kodu, komut satirindan calistirmak istiyorsak    *
*   komut satirina komut satiri  argumanlari gecilmelidir.*
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

int main (int argc , char **argv){
	//argument count
	//argument vector
	if (argc != 4)
	    printf("gecersiz islem");

	//argv[0] -> komutsatiri.c
	int opr1 = atoi (argv[1]);
	int opr2 = atoi (argv[2]);

	switch (*argv[3]){
		case '+': printf("%d + %d = %d\n", opr1, opr2, opr1 + opr2);
		break;

		case '-': printf("%d - %d = %d\n", opr1, opr2, opr1 - opr2);
		break;

		case '*': printf("%d * %d = %d\n", opr1, opr2, opr1 * opr2);
		break;

		case '/':
		if (opr2 == 0)
		    printf("gecersiz islem");
		else
		    printf("%d / %d = %d\n", opr1, opr2, opr1/ opr2);
		break;

		default: printf ("gecersiz...");
	}

	return 0;
}
