/*       1
		 3 2
		 4 5 6
		 10 9 8 7
		 11 12 13 14 15 
		 .... */
#include <iostream>
using namespace std;
int main()
{ 
	int n=10,i,j;
	int num=1,mul=0,mul1=0;
	for(i=0;i<n;i++)
	{
		int temp=num;
		for(j=0;j<=i;j++)
		{
			i%2==0 ? cout<< temp++ : cout<< temp--;
			cout<<" ";
		}
		if(i%2==0)
		{
			mul+=2;
			num=(temp-1)+mul;
		}
		else
		{
			mul1=mul1+2;
			num=(temp+1)+mul;
		}
		cout<< endl;
	}
}
