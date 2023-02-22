#include<iostream>
using namespace std;
int main()
{
	int a,b,c,n,i;
	a=0,b=1;
	cout<<"enter number"<<endl;
	cin>>n;
	cout<<"finonacci series:"<<endl;
	for(i=a; i<=n; i++)
	{
		cout<<a<<" ";
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
