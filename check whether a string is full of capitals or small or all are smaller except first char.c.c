/* Given a word, you need to judge whether the usage of capitals in it as it follows
All letters in this word are capitals, like "USA" or all letters in this word
are not capitals, like "hello" or only the first letters in this word is capital,like
"Google"
ip: GooGle op: false  */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    int small=0,caps=0;
    printf("Enter a string:");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            caps++;
        else if(a[i]>='a' && a[i]<='z')
            small++;
        else
        {
            printf("please enter the alphabets...\n");
            break;
        }
    }
    if(strlen(a)==caps || strlen(a)==small)
        printf("True");
    else if(a[0]>='A' && a[0]<='Z'&&(strlen(a)==small+1))
        printf("True");
    else
        printf("False");
}
