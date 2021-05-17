/* Given an integer, count the number of divisors occurring
within the integer ip:124 op:3  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the integer:");
    scanf("%d",&n);
    int count=0;
    int temp=n;
    while(n>0)
    {
        int r=n%10;
        if(r==0)
            count;
        else if(temp%r==0)
            count++;
        n/=10;
    }
    printf("%d",count);
}
