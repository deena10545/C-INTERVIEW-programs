//You have an array of n elements, and a sum. Check if any 2 elements in the array sum to the given sum.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],t,i,j,temp;
    printf("Enter the no.of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the targeted element:");
    scanf("%d",&t);
    int count=0;
    for(i=0;i<n;i++)
    {
        temp=abs(t-a[i]);
        for(j=0;j<n;j++)
        {
            if(a[j]==temp)
            {
                count=1;
                break;
            }
        }
    }
    if(count==1)
        printf("TRUE");
    else
        printf("FALSE");
}
