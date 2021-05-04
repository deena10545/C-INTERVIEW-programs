/* ip: {1,2,3,4,5,6,7,8} k=3
op: [3,2,1,6,5,4,8,7} */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the k value:");
    scanf("%d",&k);
    reverse(arr,n,k);
    printf("Output array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void reverse(int arr[],int n,int k)
{
    int count=0,i,j;
    while(count<n)
    {
        i=count;
        j=i+k-1;
        if(j>=n)
            j=n-1;
        while(i<j)
        {
            arr[i]=arr[i]^arr[j];
            arr[j]=arr[j]^arr[i];
            arr[i]=arr[i]^arr[j];
            i++;
            j--;
        }
        count+=k;
    }
}
