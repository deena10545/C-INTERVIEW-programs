#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],n,i,j;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i]==a[j])
                break;
        }
        if(j==n)
        {
            printf("The index of the first non recurring element is: %d",i);
            break;
        }
    }
    if(j==n)
        printf("The index of the first element is found");
    else
        printf("there is no non-recurring element");
}
