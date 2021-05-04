/* ip: PROGRAM
         G
        GR
       GRA
      GRAM
     GRAMP
    GRAMPR
   GRAMPRO   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    printf("Enter the string:");
    gets(str);
    int i=0,j,k;
    while(i<strlen(str)/2)
        i++;
    int count=i;

    for(j=0;j<strlen(str);j++)
    {
       count=i;
        for(k=0;k<strlen(str);k++)
        {
            if(j+k>=strlen(str)-1)
                {
                    if(count<strlen(str))
                       printf("%c",str[count++]);
                    else
                    {
                        count=0;
                        printf("%c",str[count++]);
                    }
                }
            else
                printf(" ");
        }
        printf("\n");
    }
}
