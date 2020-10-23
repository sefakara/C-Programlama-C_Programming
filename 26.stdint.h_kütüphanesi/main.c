/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  23/10/2020             *
*     stdint.h kutuphanesi icindeki siklikla kullanilan   *
*     bazi standart tur es isimleri                       *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdint.h>

int main (){

	//standart tur es isimleri
	printf ("signed char             : %u\n", sizeof(int8_t));
	printf ("short                   : %u\n", sizeof(int16_t));
	printf ("int                     : %u\n", sizeof(int32_t));
	printf ("long long               : %u\n", sizeof(int64_t));
	printf ("unsigned char           : %u\n", sizeof(int8_t));
	printf ("unsigned short          : %u\n", sizeof(uint16_t));
	printf ("unsigned int            : %u\n", sizeof(uint32_t));
	printf ("unsigned long long      : %u\n", sizeof(uint64_t));


	//int_least8_t : en az 8 bitlik
	printf ("least signed char       : %u\n", sizeof(int_least8_t));
	printf ("least short             : %u\n", sizeof(int_least16_t));
	printf ("least unsigned char     : %u\n", sizeof(uint_least8_t));
	printf ("least unsigned short    : %u\n", sizeof(uint_least16_t));

    puts("\n");

    //int_fast8_t : en fazla 8 bitlik
	printf ("fast int                : %u\n", sizeof(int_fast32_t));
	printf ("fast long long          : %u\n", sizeof(int_fast64_t));
	printf ("fast unsigned int       : %u\n", sizeof(uint_fast32_t));
	printf ("fast unsigned long long : %u\n", sizeof(uint_fast64_t));

	puts("\n");

	//kutuphanedeki bazi makrolar
	printf ("int8min                 : %d\n",INT8_MIN);
	printf ("int16min                : %d\n",INT16_MIN);
	printf ("int32min                : %d\n",INT32_MIN);
	printf ("int8max                 : %d\n",INT8_MAX);
	printf ("int16max                : %d\n",INT16_MAX);
	printf ("int32max                : %d\n",INT32_MAX);
}
