//the median of two sorted arrays
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1[50],a2[50],res[100],i,j,n,k,m;
    printf("Enter the no. of elements in the first & second array:\n");
    scanf("%d %d",&n,&m);
    printf("Enter array elements 1:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
        res[i]=a1[i];
    }
    int count=i;
    printf("Enter array elements 2:");
    for(j=0;j<m;j++)
    {
        scanf("%d",&a2[j]);
        res[count]=a2[j];
        count++;
    }
    int temp;
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(res[i]>res[j])
            {
                temp=res[i];
                res[i]=res[j];
                res[j]=temp;
            }
        }
    }
    printf("The sorted merge array is:");
     for(k=0;k<count;k++)
    {
        printf("%d",res[k]);
    }
    int med;
    int x=res[count/2];
    int y=res[(count/2)-1];
    int z=res[(count/2)+1];
    if(count%2==0)
    {
        med=(x+y)/2;
        printf("\nThe median of two sorted array :%d",med);
    }
    else
    {
        med=(x+z)/2;
        printf("\nThe median of two sorted array :%d",med);
    }
}
