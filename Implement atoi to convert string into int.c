//implement atoi to convert a string to an integer.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    printf("Enter the string:");
    gets(str);
    int x=atoi(str);
    printf("After converting string into integer: %d",x);
}

