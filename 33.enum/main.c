/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  16/11/2020             *
*   enum'lar                                              *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

typedef enum state{FALSE, TRUE}state;


int main () {
	typedef enum week {empty,monday, tuesday, wednesday, thursday, friday, saturday, sunday}week;


	printf ("%u\n", sizeof (week));
	week day = monday;
	printf ("the day of week : \n");
	printf ("%d\n",monday);
	printf ("%d\n",tuesday);
	printf ("%d\n",wednesday);
	printf ("%d\n",thursday);
	printf ("%d\n", friday);
	printf ("%d\n", saturday);
	printf ("%d\n",sunday);


	state val = TRUE;
	if (val)
	    printf("State is true\n");
	else
	    printf("State is false\n");


	return 0;
}
