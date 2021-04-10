/* ip:{ 5,1,4,6,8,7}
op: 6
The left side elements of element 6 are smaller and right side elements are greater than 6. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter the no. of array elements:\n");
    scanf("%d",&n);
    int a[n],leftmax[n],rightmin;
    printf("Enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    leftmax[0]=0;
    for(i=1;i<n;i++)
    {
        if(leftmax[i-1]>a[i-1])
            leftmax[i]=leftmax[i-1];
        else
            leftmax[i]=a[i-1];
    }
    rightmin=a[n-1];
    int count=0;
    printf("Output:\n");
    for(i=n-1;i>0;i--)
    {
        if(leftmax[i]<a[i] && rightmin>a[i])
        {
            printf("%d ",a[i]);
        }
        else
            count++;
        if(rightmin>a[i])
            rightmin=a[i];
    }
    if(count==n)
        printf("There is no such element in the array....");
}
