/* Given an binary array nums, return the max number of consecutive
1's in the array. ip:{1,1,0,1,1,1} op:3  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("Enter the array elements:");
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int max=0,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            count++;
        else if(a[i]==0)
            count=0;
        if(count>max)
            max=count;
    }
    printf("%d",max);
}
