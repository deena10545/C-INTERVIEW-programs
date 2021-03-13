// Format a string of numbers to display a currency eg. "1234.678" to "1,234.68"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    int i,b=0,j=0,l=0,len=0,count;
    printf("Enter a string:");
    gets(a);
    i=0;
    while(a[i]!='.')
    {
        i++;
    }
    count=i;
    for( i=count-3;i>0;i-=2)
    {
        for(j=strlen(a);j>=i;j--)
        {
            a[j+1]=a[j];
        }
        a[i]=',';
    }
    i=0;
    while(a[i]!='.')
    {
        b++;
        i++;
    }
    if(a[b+3]-'0'>=5)  //Round off to two decimal values...
    {
        len=a[b+2]-'0';
        len++;
    }
    else
    {
        len=a[b+2]-'0';
    }
    a[b+2]='\0';
    printf("%s",a);
    printf("%d",len);
}
