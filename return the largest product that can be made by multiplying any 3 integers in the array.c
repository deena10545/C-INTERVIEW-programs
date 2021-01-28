#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],n,i,j,p,p1,temp;
    printf("Enter the array elements:");
    scanf("%d",&n);
    printf("The array elements are:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    printf("Sorted array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    p=a[0]*a[1]*a[n-1];
    p1=a[n-3]*a[n-2]*a[n-1];
    if(p>p1)
    {
        printf("%d is the largest product of 3 numbers",p);
    }
    else
    {
        printf("%d is the largest product of 3 numbers",p1);
    }
}
