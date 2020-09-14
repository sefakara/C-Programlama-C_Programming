#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int kar;
    if ((kar=getchar()) !='\n')
        main();
    putchar(kar);
}
