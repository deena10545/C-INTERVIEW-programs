#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,arrsum=0;
    scanf("%d",&n);
    int i,j,a[n];
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        arrsum+=a[i];
    }
    sum=n*(n+1)/2;
    printf("The missing number is: %d",sum-arrsum);
}
