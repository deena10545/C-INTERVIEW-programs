//Convert numbers into alphabets like in excel sheet...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    char letter[10];
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        int rem=n%26;
        if(rem==0)
        {
            letter[i]='Z';
            n=(n/26)-1;
            i++;
        }
        else
        {
            letter[i]=(rem-1)+'A';
            n/=26;
            i++;
        }
    }
    for(j=i-1;j>=0;j--)
        printf("%c",letter[j]);
}
