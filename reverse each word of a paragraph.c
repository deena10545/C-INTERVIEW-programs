#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100],temp;
    int i=0,j=0,k=0;
    printf("Enter the string:");
    gets(a);
    int len=strlen(a);
    for(i=0,j=0;j<len;j++)
    {
        if((a[j]==' ')||(j==len-1))
        {
            if(j<len-1)
                k=j-1;
            else
                k=j;
        while(i<k)
        {
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;
            i++;
            k--;
        }
        i=j+1;
    }
    }
    printf("%s",a);

}
