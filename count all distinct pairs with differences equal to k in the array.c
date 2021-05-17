#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d",&n);
   int a[n],i,j,k;
   for(i=0;i<n;i++)
        scanf("%d",&a[i]);
   printf("Enter the k value:");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               a[i]=a[j]^a[i];
               a[j]=a[j]^a[i];
               a[i]=a[i]^a[j];
           }
       }
   }
    findPairs(a,n,k);
}
void findPairs(int a[], int n, int k)
{
    int i=0,j=0;
    int count=0;
    while(j<n)
    {
        if(a[j]-a[i]==k)
        {
            count++;
            i++;
            j++;
        }
        else if(a[j]-a[i]>k)
            i++;
        else
            j++;
    }
    printf("%d",count);
}
