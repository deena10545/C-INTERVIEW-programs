/* Given a string you need to print the size of the longest possible substring
that has exactly k unique characters. If there is no possible substring then print -1.
Ip: 'aabacbebebe',k=3
op: 7 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    gets(a);
    int i,k;
    scanf("%d",&k);
    int res=longsubstring(a,k);
    printf("%d",res);
}
int longsubstring(char a[], int k)
{
    int i,j,res=0,count=1;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]!=a[j])
            {
                count++;
            }
            if(count==k)
                res++;
        }
        count=0;
    }
    if(res>0)
        return res;
    else
        return -1;

}
