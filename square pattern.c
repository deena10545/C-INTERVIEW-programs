#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,j,t,t1;
   printf("Enter the number:");
   scanf("%d",&n);
   t=n;
   t1=n;
   for(i=0;i<n;i++)
   {
        for(j=0;j<n;j++)
        {
            if(i==0)
            {
                printf("%d ",t);
            }
            else
            {
                if(i<=j)
                {
                    printf("%d ",t);
                }
                else
                    printf("%d ",t1-j);
            }
        }
        t--;
        printf("\n");
   }
}
