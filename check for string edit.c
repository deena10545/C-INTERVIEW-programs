#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i=0,j=0,count=0,diff;
    char s1[50],s2[50];
    printf("Enter two strings:");
    gets(s1);
    gets(s2);
    m=strlen(s1);
    n=strlen(s2);
    diff=m-n;
    if(diff>1)
        printf("False");
    while(m>i && n>j)
    {
        if(s1[i]==s2[j])
        {
            i++;
            j++;
        }
        else if(diff==1)
        {
            if(m>n)
                i++;
            else
                j++;
            count++;
        }
        else
        {
            i++;
            j++;
            count++;
        }
    }
    if(count>=2)
        printf("False");
    else
        printf("True");
}
