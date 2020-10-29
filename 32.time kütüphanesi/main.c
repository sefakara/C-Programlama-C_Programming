/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  29/10/2020             *
*     time.h kutuphanesi                                  *
*     localtime ve time fonksiyon prototipleri            *
*     tm* localtime(cons time_t* _v);                     *
*     time_t time(time_t* _v);                            *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


	//int	tm_sec;		/* Seconds: 0-59 (K&R says 0-61?) */
	//int	tm_min;		/* Minutes: 0-59 */
	//int	tm_hour;	/* Hours since midnight: 0-23 */
	//int	tm_mday;	/* Day of the month: 1-31 */
	//int	tm_mon;		/* Months *since* january: 0-11 */
	//int	tm_year;	/* Years since 1900 */
	//int	tm_wday;	/* Days since Sunday (0-6) */
	//int	tm_yday;	/* Days since Jan. 1: 0-365 */
	//int	tm_isdst;	/* +1 Daylight Savings Time, 0 No DST, * -1 don't know */



int main () {
	time_t timer;      //time_t long 'un tur es ismi.  long timer; 'da yazilabilir.
	printf ("%u byte\n", sizeof(time_t)); //long
	struct tm* tinfo;

	timer = time(NULL);
    tinfo = localtime(&timer);
	printf ("SAAT  : %02d / %02d / %02d\n", tinfo->tm_hour, tinfo->tm_min, tinfo->tm_sec);
    printf ("TARIH : %02d / %02d / %02d\n", tinfo->tm_mday, 1+tinfo->tm_mon, 1900+tinfo->tm_year);

	return 0;
}
