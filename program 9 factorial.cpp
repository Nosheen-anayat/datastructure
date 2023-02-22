#include<iostream>
using namespace std;
int main()
{
	int a ,b,f;
	cout<<"enter a number"<<endl;
	cin>>a;
	{
	f=1;
	b=1;
	while(b<=a)
	{
		f=f*b;
		b=b+1;	
	}
	cout<<"factorial of f is"<<f<<endl;
}
return 0;
}
