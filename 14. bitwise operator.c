//bitwise operator


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 12, b = 25;

    printf("Output = %d \n", a&b);   //Bitwise AND Operator

    printf("Output = %d \n", a|b);   //Bitwise OR Operator

    printf("Output = %d \n", a^b);   //Bitwise XOR Operator

    printf("Output = %d \n", ~35);   //Bitwise Complement
    printf("Output = %d \n", ~-12);

    return 0;
}
