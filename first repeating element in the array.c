// Find the first repeating element in the array ip:{10,5,3,5,3,4} op: 5
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("The first repeating element is %d",a[i]);
                break;
            }
        }
        if(j==n)
            continue;
        else
            break;
    }
}
