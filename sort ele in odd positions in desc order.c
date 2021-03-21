/* program to sort the elements in odd positions in descending order and
elements in ascending order..
eg. i/p: 13,2,4,15,12,10,5
o/p: 13,2,12,10,5,15,4 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],n,i,j;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i+=2)
    {
        for(j=i+2;j<n;j+=2)
        {
            if(a[i]<a[j])
            {
                a[i]=a[i]^a[j];
                a[j]=a[j]^a[i];
                a[i]=a[i]^a[j];
            }
        }
    }
     for(i=1;i<n;i+=2)
    {
        for(j=i+2;j<n;j+=2)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]^a[j];
                a[j]=a[j]^a[i];
                a[i]=a[i]^a[j];
            }
        }
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
