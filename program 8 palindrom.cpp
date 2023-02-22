#include<iostream>
#include<string>
using namespace std;
int main()
{
		int num , rem, temp , sum=0;
	cout<<"enter a number and check Plaindrome"<<endl;
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	 if(sum==num)
	 cout<<"plaindrome"<<endl;
	 else
	  cout<<" not palindrome"<<endl;
	 
	 	 return 0;
	 }
	 	 
