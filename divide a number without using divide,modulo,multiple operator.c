#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,num,count=0;
    printf("Enter the divisor and divider:");
    scanf("%d %d",&num,&n);
    int i=n;
    while(i<=num)
    {
        i+=n;
        count++;
    }
    printf("The quotient is : %d",count);
}
