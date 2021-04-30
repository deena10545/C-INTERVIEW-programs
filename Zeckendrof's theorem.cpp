// ip: 30
// op: 21 8 1
#include<iostream>
using namespace std;
void fibonacci(int n)
{
	while(n>0)
	{
		int f1=0,f2=1,f3=1;
		while(f3<=n)
		{
			f1=f2;
			f2=f3;
			f3=f1+f2;
		}
		cout<<f2<<' ';
		n=n-f2;
	}
}
int main()
{
	int n;
	cin>>n;
	fibonacci(n);
	return 0;
}
