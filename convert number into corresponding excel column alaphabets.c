#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem,i=0,start,end;
    char str[50],res_str[50];
    printf("Enter the number to print for the corresponding column name in Excel:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%26;
        if(rem==0)
        {
            str[i++]='Z';
            n=(n/26)-1;
        }
        else
        {
            str[i++]= (rem-1) +'A';
            n/=26;
        }
    }
    str[i]= '\0';
    int count=0;
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    end=count-1;
    for(start=0;start<count; start++)
    {
        res_str[start]=str[end];
        end--;
    }
    res_str[start]='\0';
    printf("%s",res_str);
    return;
}
