#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,t,r,res=0;
    printf("Enter a number to check for palindrome:");
    scanf("%d",&num);
    t=num;
    while(num!=0)
    {
        r=num%10;
        res=res*10+r;
        num/=10;
    }
    if(t==res)
        printf("The number %d is palindrome",t);
    else
        printf("The number %d is not palindrome",t);
}
