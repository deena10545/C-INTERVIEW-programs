/*
 print the numbers in order without using if else

 op: 1 2 3 4
     8 7 6 5
     9 10 11 12
     16 15 14 13 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp,s,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    temp=1;
    for(i=0;i<n;i++)
    {
        s=temp;
        for(j=n;j>0;j--)
        {
            i%2==0 ? printf("%d ",s++) : printf("%d ",s--);
        }
        temp=(i%2==0 ? (s-1)+n : s+n+1) ;
        printf("\n");
    }
}
