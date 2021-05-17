/* You are given an integer array gain of length n where gain[i]
is the net gain in altitude between points i and i+1 for all
(0<=i<n). Return the highest altitude of a point.
ip: [-5,1,5,0,-7] op: 1
exp: the altitudes are [0,-5,-4,1,1,-6] the highest is 1. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int sum=0,max=0;
    for(i=0;i<n;i++)
    {
        if(sum>=max)
            max=sum;
        sum=sum+a[i];
    }
    printf("%d",max);
}
