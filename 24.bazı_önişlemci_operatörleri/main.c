/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  23/10/2020             *
*     #opr1 ve  opr1##opr2 kullanimlari                   *
*                                                         *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <stdio.h>

#define str(s)     #s
#define str2(s1, s2) printf(#s1" "#s2);
#define concatenate(x, y) x##y


int main (){
	printf ("**********************\n");
	printf ("%s\n",str (Hello word!));
	printf ("%s\n",str (1234));
	printf ("%s\n",str (12.34));
	puts (str (Hello word!));
	str2(Hello, word!);

	printf ("\n");

	printf ("**********************\n");
	int toplam = 30;
	printf("%d", concatenate(top, lam));

	return 0;
}
