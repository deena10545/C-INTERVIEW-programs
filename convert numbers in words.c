#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n=0,temp,temp1,s,s1;
    printf("Enter the number:");
    scanf("%d", &n);
    if(n>=1000)
    {
        printf("Enter within limit.....");
        return;
    }
    char a[10][25] = {"one hundred", "two hundred", "three hundred", "four hundred","five hundred","six hundred",
    "seven hundred", "eight hundred", "nine hundred"};
    char b[10][25] = {"twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
    char c[20][15] = {"zero","one","two","three", "four","five", "six", "seven", "eight", "nine", "ten ", "eleven ",
    "twelve ","thirteen ", "fourteen ", "fifteen ","sixteen ", "seventeen ", "eighteen ","nineteen "};
    if(n>=0&&n<20)
        printf("%s",c[n]);
    else if(n>=20&&n<100)
    {
        if(n%10==0)
        {
            temp=n/10;
            printf("%s",b[temp-2]);
        }
        else
        {
            temp=n/10;
            temp1=n%10;
            printf("%s %s",b[temp-2],c[temp1]);
        }
    }
    else
    {
        if(n%100==0)
        {
            temp=n/100;
            printf("%s",a[temp-1]);
        }
        else
        {
            temp=n%100;
            temp1=n/100;
            s=temp%10;
            s1=temp/10;
            if(temp%10==0)
            {
                if(s1!=1)
                    printf("%s and %s",a[temp1-1],b[s1-2]);
                else
                    printf("%s and %s",a[temp1-1],c[10]);
            }
            else if(temp>20&&temp%10!=0)
            {
                printf("%s and %s %s",a[temp1-1],b[s1-2],c[s]);
            }
            else
            {
                printf("%s and %s",a[temp1-1],c[temp]);
            }
        }
    }
    return 0;
}
