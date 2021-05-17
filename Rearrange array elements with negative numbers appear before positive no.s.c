/* program to print all the negative integers to the front
ip: -12, 3 , 4 , -7 ,-3
op: -12,-3,-7,3,4 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,a[50];
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    j=n-1;
    while(i<j)
    {
        if(a[i]>0 && a[j]<0)
        {
            a[i]=a[i]^a[j];
            a[j]=a[j]^a[i];
            a[i]=a[i]^a[j];
            i++;
            j--;
        }
        if(a[i]>0 && a[j]>0)
        {
            j--;
        }
        if(a[i]<0 && a[j]<0)
        {
            i++;
        }
        if(a[i]<0 && a[j]>0)
        {
            i++;
            j--;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
