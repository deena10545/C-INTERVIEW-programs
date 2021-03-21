/*program to give the following output for the given string
i/p: a1b10
o/p: abbbbbbbbbb
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    printf("Enter a string:");
    gets(a);
    int i,j,n=0;
    for(i=0;a[i]!='\0';i=i+2)
    {
         char temp=a[i];
        if(a[i+2]>='0' && a[i+2]<='9')
        {
            int m=((a[i+1]-'0')*10) + (a[i+2]-'0');
            for(j=0;j<m;j++)
                printf("%c",temp);
            i++;
        }
        else
        {
            n=a[i+1]-'0';
            for(j=0;j<n;j++)
                printf("%c",temp);
        }
    }
}
