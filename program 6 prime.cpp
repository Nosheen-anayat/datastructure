#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(i=2; i<=n-1; i++)
	{
		if(n%i==0)
		{
			break;
		}
		
	}
	if(n==i)
	{
		cout<<"number is prime"<<endl;
	}
	else
	{
		cout<<"number is not prime"<<endl;
	}
	return 0;
}
	
	
	
	
	
	
	
