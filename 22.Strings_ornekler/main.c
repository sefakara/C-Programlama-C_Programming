/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  13/10/2020             *
*    Strings uygulamalari                                 *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <stdio.h>
#include <stdlib.h>


#define     SIZE    50

int main()
{

    {
        //girilen metni tersten yazan program
        char strings[SIZE];
        char temp;
        int len = 0;
        printf("Enter any sentences...\n");
        gets(strings);
        for(int i = 0;strings[i] != '\0';++i)
            len++;

        for (int i=0;i<(len/2); ++i){
            temp = strings[i];
            strings[i] = strings[len-1-i];
            strings[len-1-i] = temp;
        }
        puts(strings);
    }




    {
        //girilen kelimeleri birlestiren program
        char strings[SIZE];
        char strings2[SIZE];
        int len = 0;
        printf("Enter two word...\n");
        scanf("%s%s",strings,strings2);
        for(int i = 0;strings[i] != '\0';++i)
            len++;

        for(int i=0; strings2[i] != '\0';++i)
            strings[len++] = strings2[i];

        strings[len] = '\0';
        puts(strings);
    }



    getchar();      //buffer

    {
        //cumlenin kac sozcukten olustugunu bulan program
        char strings[SIZE];
        int cnt = 1;
        printf("Enter any sentences...\n");
        gets(strings);

        for(int i = 0; strings[i] != '\0'; ++i){
            if(strings[i] == ' ' || strings[i] == ',' || strings[i] == '.')
                ++cnt;
        }
        printf("There are %d words.\n",cnt);
    }




    return 0;
}
