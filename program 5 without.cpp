#include<iostream>
using namespace std;
int main()
{
	int a , b;
	cout<<"enter a value of a"<<endl;
	cin>>a;
	cout<<"enter a value of b"<<endl;
	cin>>b;
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	cout<<a<<b<<endl;
	return 0;
}
