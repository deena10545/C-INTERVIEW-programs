//camelcase is except first word the first letter in each word is uppercase
//remaining lowercase eg.deenaDayalan.. op:2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    gets(a);
    int i=0,count=1;
    while(a[i]!='\0')
    {
        if(a[i]>='A' &&a[i]<='Z')
            count++;
        i++;
    }
    printf("%d",count);
}
