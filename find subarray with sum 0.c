//check for the subarray with sum zero
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
    int flag=0;
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+a[j];
            if(sum==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("True");
            break;
        }
    }
    if(flag==0)
        printf("False");
}
