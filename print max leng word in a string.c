/*Given a sentence find the word which has max length and is even
    eg. string = I like to eat banana
    o/p: banana */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100],b[50];
    int index=0,count=0,i,max=0;
    printf("Enter a string:");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=' ')
        {
            count++;
        }
        else
        {
                if(count>max)
                {
                    if(count%2==0)
                        {
                        max=count;
                        index=i-max;
                        }
                }
                count=0;
        }
        }
        if(count>max)
        {
            if(count%2==0)
            {
            max = count;
            index = strlen(a)-max;
            }
        }
    int j=0;
    for(i=index;i< index+max;i++)
    {
        b[j] = a[i];
        j++;
    }
    b[j] = '\0';
    printf("Longest even word in a string is: %s\n", b);
}
