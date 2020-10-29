/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  29/10/2020             *
*   void pointers   (generic pointers)                    *
*   turden bagimsiz islem yapmak istedigimizde kullaniriz *
*                                                         *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

/*
type = 0 ise int
type = 1 ise float
type = 2 ise char
*/

void generic_print_pointers(const void* vp, size_t size, int type);

int main (){
	int ival = 10;
	float fval = 20.3;
	char cval = 'A';
	int aint[3] = {1,2,3};
	float afloat[] = {2.4, 45.81, 52.56};
	char achar[] = {'D', 'E', 'N', 'E', 'M', 'E', '\0'};

	//void* ptr turden bagimsizdir. O yuzden tur farketmeksizin adres tutabilir.
	//Buna generic_pointer' da denir.
	void* ptr = &ival;
	ptr = &fval;
	ptr = &cval;

	generic_print_pointers(&ival,1,0);
	printf("\n");
	generic_print_pointers(achar,7,2);


	return 0;
}


void generic_print_pointers(const void* vp, size_t size, int type){

	for (int i = 0; i < size; ++i){
        if (type == 0){
            printf ("%d ", *((int*)vp + i));
        }

        else if (type == 1){
            printf ("%f ", *((float*)vp + i));
        }

        else if (type == 2){
            printf ("%c ", *((char*)vp + i));
        }
    }
}
