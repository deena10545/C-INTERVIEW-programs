// Validate ipv4 address
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char a[50];
    gets(a);
    int i,j,k=0,res=0,count=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i+1]=='.' || a[i+1]=='\0')
        {
          j=i;
          while(j>=0 && a[j]!='.')
          {
            res=res+(a[j]-'0')*pow(10,k);
            k++;
            j--;
          }
           if(!(res>=0 && res<=255))
           {
               printf("0");
               break;
           }
            count++;
            res=0;
            k=0;
            i++;
         }
    }
    if(count==3 && res>=0 && res<=255)
        printf("1");
}
