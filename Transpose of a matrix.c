#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50][50],m,n,i,j,t[50][50];
    printf("Enter the number of rows:\n");
    scanf("%d",&m);
    printf("Enter the number of columns:\n");
    scanf("%d",&n);
    printf("Enter a matrix elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
            printf("  ");
        }
        printf("\n");
    }
     printf("The transpose of a matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t[i][j]=a[j][i];
            printf("%d",t[i][j]);
            printf("  ");
        }
        printf("\n");
    }


}
