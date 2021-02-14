//move all the zeros to the beginning input
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i;
    int count=0;
    printf("Enter the no. of array elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=a[count];
            a[count]=0;
            count++;
        }
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
