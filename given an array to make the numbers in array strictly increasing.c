/* You are given an integer array nums. In one operation, you can choose an integer
of the array and increment it by 1. Return the minimum number of operations needed to make
nums strictly increasing... ip: nums[1,1,1] op: 3  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,index;
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int count=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<=a[i-1])
        {
            int p=(a[i-1]-a[i])+1;
            count+=p;
            a[i]+=p;
        }
    }
    printf("%d",count);
}
