//Working with assignment operator

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b;

    b = a;    //b is 5
    printf("b = %d \n", b);

    b += a;   //b is 10
    printf("b += %d \n", b);

    b -= a;   //b is 5
    printf("b -= %d \n", b);

    b *= a;   //b is 25
    printf("b *= %d \n", b);

    b /= a;   //b is 5
    printf("b /= %d \n", b);

    b %= a;   //b is 0
    printf("b %= %d \n", b);

    return 0;
}
