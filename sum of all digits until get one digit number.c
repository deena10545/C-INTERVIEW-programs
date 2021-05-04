#include <stdio.h>
#include <stdlib.h>
int sumofDigits( );
int main()
{
    int n,res,i;
    printf("Enter the number:");
    scanf("%d",&n);
    res=sumofDigits(n);
    if(res>=10)
        res=sumofDigits(res);
    printf("%d ",res);
}
int sumofDigits(int n)
{
    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n/=10;
    }
    return sum;
}
