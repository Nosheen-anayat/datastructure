#include<iostream>
using namespace std;
int main()
{
	int a , b, temp;
	cout<<"enter a value of a"<<endl;
	cin>>a;
	cout<<"enter a value of b"<<endl;
	cin>>b;
	{
		temp=a;
		a=b;
		b=temp;
	}
	cout<<a<<b<<endl;
	return 0;
}
