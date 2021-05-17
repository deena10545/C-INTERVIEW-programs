#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[50];
    scanf("%d",&n);
    int arrsum=0,sum=0;
    printf("Enter the array elements:");
    for(i=0;i<n+1;i++)
    {
        scanf("%d",&a[i]);
        arrsum=arrsum+a[i];
    }
    sum=n*(n+1)/2;
    printf("\nThe duplicate is: %d",arrsum-sum);
}
