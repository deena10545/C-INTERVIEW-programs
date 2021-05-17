#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    int a[num],i,j;
    printf("Enter the array elements:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        a[i]*=a[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]^a[j];
                a[j]=a[j]^a[i];
                a[i]=a[i]^a[j];
            }
        }
    }

    for(i=0;i<num;i++)
        printf("%d ",a[i]);

}
