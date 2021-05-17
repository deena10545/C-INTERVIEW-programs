/* print all the leaders in the array. An element is leader if it is greater
than all the elements to its right side. And the rightmost element in always
a leader
ip: {16,17,4,3,5,2}
op: 17,5,2
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    findLeaders(a,n);
}
void findLeaders(int a[], int n)
{
    int max=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>max)
        {
            printf("%d ",a[i]);
            max=a[i];
        }
    }
}
