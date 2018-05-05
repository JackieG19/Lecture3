#include<stdio.h>
#include<cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    string s = get_string("s: ");
    string t =  s; // copy string address

    if (strlen(t) > 0) // capitalize first letter in string, if the length of t is greater than 0
    {
        t[0] = toupper(t[0]);
// change the first letter of t to be the result of calling toupper of that first character of t
    }
    print("s: %s\n", s);
    print("t: %s\n", t);
}

/*
string s = is a chunk of memory [] and calls it s, stores  one byte of the array
string("s: ") = Stelios\0 - an array of charaters takes up a byte

when the computer look at a string it will check each array of that string, if there is no \0,
it will print out the first letter and so on until it reachs \0 and stops printing

*/