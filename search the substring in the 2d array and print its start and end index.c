/*Save the string “WELCOMETOZOHOCORPORATION” in a two dimensional array and search
for substring like “too” in the two dimensional string both from left to right and from top to bottom.
W E L C O
M E T O Z
O H O C O
R P O R A
T I O n
And print the start and ending index as
Start index : <1,2>
End index: <3, 2>  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[5][5]={'W','E','L','C','O','M','E','T','O','Z','O','H','O','C','O','R','P','O','R','A','T','I','O','N'};
    char b[10];
    int x,i,j,flag=0;
    printf("WELCOMETOZOHOCORPORATION\n");
    printf("Enter the substring to search for the above string:");
    gets(b);
    for(i=0;i<5;i++)
    {
        int k=0;
        for(j=0;j<5;j++)
        {
            if(a[i][j]==b[0])
            {
                x=j;
                while(x<5)
                {
                    if(a[i][++x]==b[++k])
                    {
                        if(k+1==strlen(b))
                        {
                            printf("Starting index: %d %d\n",i,j);
                            printf("Ending index: %d %d\n",i,x);
                            flag=1;
                            break;
                        }
                    }
                    else
                       {
                           k=0;
                           break;
                       }
                }
                x=i;
                while(x<5)
                {
                    if(a[++x][j]==b[++k])
                    {
                        if(k+1==strlen(b))
                        {
                            printf("Starting index: %d %d\n",i,j);
                            printf("Ending index: %d %d\n",x,j);
                            flag=1;
                            break;
                        }
                    }
                    else
                       {
                           k=0;
                           break;
                       }
                }
            }
        }
    }
    if(flag==0)
        printf("The substring is Not present in the given string...");
}
