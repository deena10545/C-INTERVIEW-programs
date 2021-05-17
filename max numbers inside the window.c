/* Given an array of numbers and a window of size k. Print the maximum of numbers
inside the window for each step as the window moves from the beginning
of the array. Enter the array size: 8 elements: 1,3,5,2,1,8,6,9 op: 5 5 5 8 8 9 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k;
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the window size:");
    scanf("%d",&k);
    for(i=0;i<=n-k;i++)
    {
        int max=0;
        for( j=i;j<=(k-1)+i ;j++)
        {
            if(a[j]>max)
                max=a[j];
        }
        printf("%d ",max);
    }
}
