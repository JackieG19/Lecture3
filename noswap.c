#include<stdio.h>
#include<cs50.h>
#include <string.h>
#include <ctype.h>
//#include <stdlib.h>

void swap(int a, int b); // declare 2 variable

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x is %i, y is %i\n", x, y); // prints out the value
    swap(x,y);
    printf("y is %i, y is %i\n", x, y);
}