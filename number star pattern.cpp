// program to print abcd...xyz inside the square of the star pattern...
#include<iostream>
using namespace std;
int main()
{
	int n=10,i,j;
	char c=65;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || j==0 || i==n-1 || j==n-1)
				cout<<"* ";
			else
			{
				cout<< c++;
				cout<< " ";
				if(c==91)
				{
					c=65;
				}
			}
		}
		cout<< endl;
	}
}
