/* Take a 2 or 3 digit input number, reverse it and add it to the original 
number until the obtained number is a palindrome or 5 iterations are
completed ip: 32 op:55 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int i,rev;
    for(i=0;i<5;i++)
    {
        int sum=0;
        int temp=n;
        rev=reverse(temp);
        sum=n+rev;
        rev=reverse(sum);
        if(sum==rev)
        {
            printf("%d",sum);
            break;
        }
        n=sum;

    }
}
int reverse(int temp)
{
    int r,rev=0;
    while(temp!=0)
        {
            r=temp%10;
            rev=rev*10+r;
            temp/=10;
        }
    return rev;
}
