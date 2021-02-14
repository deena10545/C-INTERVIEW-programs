#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[50];
    int i,result;
    printf("Enter the string to perform operation on numbers:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(!(str[i]>='0' && str[i]<='9'))
        break;
    }
    int index=i;
    result=(int)str[0]-48;
    int t;
    i=1;
    int j=index;
    while(i<index)
    {
        t=(int)str[i]-48;
        if(str[j]=='+')
            result+=t;
       else if(str[j]=='-')
            result-=t;
       else if(str[j]=='*')
            result*=t;
        else if(str[j]=='/')
            result/=t;
            j++;
            i++;
    }
    printf("%d",result);

}

