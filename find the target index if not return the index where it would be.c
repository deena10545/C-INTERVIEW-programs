/* Given an sorted array and a targeted value, return the index if the target is found,
if not return the index where it would be if it were inserted in order
ip:[1,3,5,6] target:5 op:2 ,ip:[1,3,5,6] target-7 op:4  */
#include <stdio.h>
#include <stdlib.h>
int targetvalue(int a[], int low,int high,int t)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==t)
            return mid;
        else if(a[mid]>t)
        {
           if(a[mid-1]<t && a[mid]>t)
             return mid;
           else
             return targetvalue(a,low,mid-1,t);
        }

        else if(a[mid]<t)
        {
            if(a[mid]<t && a[mid+1]>t)
                return mid+1;
            else
                return targetvalue(a,mid+1,high,t);
        }

    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,t;
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the target element:");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]^a[j];
                a[j]=a[j]^a[i];
                a[i]=a[i]^a[j];
            }
        }
    }
    int res=targetvalue(a,0,n-1,t);
    printf("%d",res);
}
