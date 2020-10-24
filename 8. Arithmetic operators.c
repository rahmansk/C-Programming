//c Program to demonstrate working of binary arithmetic operators

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 4, b = 2, c;

    //Printing a and b
    printf("a is %d and b is %d\n", a, b);

    c = a+b;   //addition
    printf("c is %d\n",c);

    c = a-b;   //subraction
    printf("c is %d\n",c);


    c = a*b;   //multiplication
    printf("c is %d\n",c);


    c = a/b;   //division
    printf("c is %d\n",c);


    c = a%b;   //modulus
    printf("c is %d\n",c);

    return 0;
}
