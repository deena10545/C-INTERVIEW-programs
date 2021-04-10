/* Given an unsorted array A of size N that contains only non negative integers, find a
continuous sub array which adds to a given number S. N=5, S=12 A[]={1,2,3,4,5}
o/p: 2 4  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *a,i,s,j;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(n));
    printf("Enter array elements:");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("Enter the sum:");
    scanf("%d",&s);
    for(i=1;i<=n;i++)
    {
        int flag=0,temp=0;
        for(j=i+1;j<=n;j++)
        {
            if(a[i]+a[j]+temp==s)
            {
                flag=1;
                break;
            }
            else if(a[i]+a[j]+temp>s)
                break;
            else
                temp+=a[j];
        }
        if(flag==1)
        {
            printf("%d %d\n",i,j);
            break;
        }
    }
    free(a);
}
