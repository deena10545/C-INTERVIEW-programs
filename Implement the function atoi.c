// Implement the function atoi
#include <stdio.h>
#include <stdlib.h>
int atoifun(char s[]);
int main()
{
    char s[50];
    gets(s);
    int a=atoifun(s);
    printf("%d",a);
}
int atoifun(char s[])
{
    int i=0,res=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z')
            return -1;
        else
        {
            res=res*10+(s[i]-'0');
        }
        i++;
    }
    return res;
}
