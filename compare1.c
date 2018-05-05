#include<stdio.h>
#include<cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char*s = get_string("s: ");
    char*t = get_string("t: ");
    //if (s == t)
    if (strcmp(s, t) == 0)
    {
        printf("same\n");
    }
    printf("different\n");
}

/*
If s and t are the same string then return 0 for equal
If s comes before t alphabetically return a negative number for lesser than
If s comes after t alphabetically return a positive number for greater than
*/

// [s] == [t] - memory locations, comparing two address or locations

/*
s[]----->[S] [t] [e] [l] [i] [o] [s] [\0]
pointer---->is an adress of something in memory.
Kind of pointing to the first byte of some array of memory
*/

/*
string is a synonym for char* - It represent ad address or pointer
char is relevant, is the pointer to a charater type data or adress of a charater
*/

/*
strcmp - takes two adress,
going to those adress,
checking are these two letter the same,
if so mave onto the next,
the moment it notice a mismatch,
return negative or positive based on whether the string is determined to be alphabetically before or after,
if it made to \0 at the same moment, will return 0
*/