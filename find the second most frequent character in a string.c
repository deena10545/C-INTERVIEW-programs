#include <stdio.h>
#include <stdlib.h>
char second_char(char *a);
int main()
{
    char a[50];
    gets(a);
    char res=second_char(a);
    printf("%c",res);
}
char second_char(char *a)
{
    int count[256]={0};
    int i;
    for(i=0;a[i]!='\0';i++)
        count[a[i]]++;
    int first=0,second=0;
    for(i=0;i<256;i++)
    {
        if(count[i]>count[first])
        {
            second=first;
            first=i;
        }
        else if(count[i]>count[second] && count[i]!=count[first])
            second=i;
    }
    return second;
}
