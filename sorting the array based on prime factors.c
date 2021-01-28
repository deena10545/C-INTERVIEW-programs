#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[50],n,i,j,k,b[50],count,prime,temp,temp1;
   printf("Enter the no. of array elements:");
   scanf("%d",&n);
   printf("Enter the array elements:");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       count=0;
       for(j=2;j<a[i];j++)
       {
           if(a[i]%j==0)
           {
                    prime=1;
                for(k=2;k<=j/2;k++)
                {
                    if(j%k==0)
                    {
                        prime=0;
                        break;
                    }
                }
           if(prime==1)
           {
               count++;
           }
       }
   }
   b[i]=count;
}
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(b[i]>b[j])
        {
            temp1=b[i];
            b[i]=b[j];
            b[j]=temp1;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else if(b[i]==b[j])
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
printf("The sorted array based on prime factors are:");
for(i=0;i<n;i++)
    printf("\n%d\n",a[i]);
}
