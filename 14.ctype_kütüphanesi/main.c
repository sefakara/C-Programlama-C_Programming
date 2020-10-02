/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  02/10/2020             *
*     ctype kutuphanesi icindeki fonksiyonlarin kullanimi *
*                                                         *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
	int ch ;
	printf ("Enter any character : ");
	ch = getchar();

	if (isalnum(ch))
	    printf ("\n'%c' is alphanumeric character.", ch);

	if (isalpha(ch))
	    printf ("\n'%c' is alphabetic character.", ch);

	if (iscntrl(ch))
	    printf ("\n'%c' is control character.", ch);

	if (isdigit(ch))
	    printf ("\n'%c' is digit character.", ch);

	if (isgraph(ch))
	    printf ("\n'%c' is graphical character.", ch);

	if (islower(ch))
	    printf ("\n'%c' is lowercase character.", ch);

	if (isprint(ch))
	    printf ("\n'%c' is printable character.", ch);

	if (ispunct(ch))
	    printf ("\n'%c' is punctuation character.", ch);

	if (isspace(ch))
	    printf ("\n'%c' is white-space character.", ch);

	if (isupper(ch))
	    printf ("\n'%c' is uppercase character.", ch);

	if (isxdigit(ch))
	    printf ("\n'%c' is hexadecimal digit character.", ch);

	int ch2;
	printf ("\nYes or no : ");
	getchar ();                     //for Enter
	ch2 = getchar();
	if (toupper(ch2) == 'Y')
	    printf ("Yes\n");
	else if (tolower(ch2) == 'n')
	    printf ("No\n");
	else
	    printf ("invalid...");


	return 0;
}
