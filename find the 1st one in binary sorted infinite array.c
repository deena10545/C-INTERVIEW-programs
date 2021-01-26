#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={0,0,0,0,0,0,0,0,0,1,1,1,1,1,1};
    int start=0,end=1,mid,res;
    while(a[end]==0)
    {
        start=end;
        end=end*2;
    }
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==1 && (mid==0 || a[mid-1]==0))
            break;
        else if(a[mid]==1)
            end=mid-1;
        else
            start=mid+1;
    }
    printf("The index of the 1st 1 binary sorted infinite array is %d",mid);
}
