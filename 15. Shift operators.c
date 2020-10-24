//shift operators

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num = 212, i;
    for (i = 0; i<=2; ++i)
        printf("Right shift by %d: %d \n", 1, num >>i );

    printf("\n");

    for (i = 0; i<=2; ++i)
        printf("Left shift by %d: %d \n", i, num << 1);

    return 0;


}
