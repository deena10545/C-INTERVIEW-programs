/*write a function to find multiplication of 2 numbers using + operator..
you must use minimum possible iterations..*/
#include <stdio.h>
#include <stdlib.h>

int multiply( int a, int b)
{
    if(b==0)
        return 0;
    else
    {
        return(a + multiply(a,b-1));
    }
}

int main()
{
    int a,b,multi;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    multi=multiply(a,b);
    printf("%d",multi);
}
