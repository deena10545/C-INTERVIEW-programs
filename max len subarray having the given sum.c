//Find the max length subarray having a given sum...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the sum:");
    scanf("%d",&k);
    int len=0,end_index=0;
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+a[j];
            if(sum==k)
            {
                if(len<j-i+1)
                {
                    len=j-i+1;
                    end_index=j;
                }
            }
        }
    }
    printf("The values between the index %d and %d:\n",end_index-len+1,end_index);
    for(i=end_index-len+1;i<=end_index;i++)
        printf("%d ",a[i]);
}

