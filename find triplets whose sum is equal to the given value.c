#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],k;
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the sum:");
    scanf("%d",&k);
    //sort(a,n);  sort the array before the implementation....
    triplets(a,k,n);
}
void triplets(int a[], int k, int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int x=a[i+1];
        if(x+a[i]+a[j]==k)
        {
            printf("%d,%d,%d\n",a[i],x,a[j]);
            i++;
            j--;
        }
        else if(x+a[i]+a[j]<k)
            i++;
        else
            j--;
    }
}
