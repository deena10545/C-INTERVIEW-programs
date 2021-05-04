#include <iostream>

using namespace std;

int main()
{
    int n=5,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if(i+j==n-1 || i+j==2*n-2)
                cout<<"*";
            else if((i==0 && i+j>=n-1) || (i==n-1 && i+j<=2*n-2))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<< endl;
    }
}
