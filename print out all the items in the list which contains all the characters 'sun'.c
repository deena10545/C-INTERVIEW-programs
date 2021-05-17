/* Given a specific word eg. sun print out all the items in list which contain all the 
characters of "sun". ip: sunday,monday,utensils,sss op: sunday, utensils.. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50][50],b[50];
    int n,i,j;
    scanf("%d",&n);
    printf("Enter the lists:");
    for(int i=0;i<n;i++)
        scanf("%s[^\n]",a[i]);
    printf("Enter the characters:");
    scanf("%s",b);
    int arr[256]={0},count;
    for(i=0;b[i]!='\0';i++)
        arr[b[i]]=1;
    for(i=0;i<n;i++)
    {
        for(j=0,count=0;a[i][j];j++)
        {
            if(arr[a[i][j]])
            {
                count++;
                arr[a[i][j]]=0;
            }
        }
        if(count==strlen(b))
            printf("%s\n",a[i]);
        for(j=0;b[j]!='\0';j++)
            arr[b[j]]=1;
    }

}
