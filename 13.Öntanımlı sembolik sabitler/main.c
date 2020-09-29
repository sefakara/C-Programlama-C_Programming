/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  29/09/2020             *
*       Ontanimli sembolik sabitler                       *
*       Derlendigi andaki bilgileri verir                 *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("FILE : %s\n",__FILE__);
    printf("DATE : %s\n",__DATE__);
    printf("TIME : %s\n",__TIME__);
    printf("FUNC : %s\n",__func__);
    printf("STDC : %d\n",__STDC__);
    printf("LINE : %d\n",__LINE__);

    return 0;
}
