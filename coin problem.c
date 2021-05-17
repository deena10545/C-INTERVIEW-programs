/* You have n coins and you want to build a staircase with these coins. The
staircase consists of k rows where the ith row has exactly i coins. The
last rows of the staircase may be incomplete. Given the integer n, return
the number of complete rows of the staircase you will build.
IP: 5 OP: 2 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num=0;
    int i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
          num++;
        }
        if(num>n)
            break;
        count++;
    }
    printf("%d",count);
}
