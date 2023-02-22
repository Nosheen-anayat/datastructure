#include<iostream>
using namespace std;
int main()
{
	int num , rem, temp , sum=0;
	cout<<"enter a number and check armstrong"<<endl;
	cin>>num;
	temp=num;
	while(temp==0)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	 if(sum!=num)
	 cout<<"\n"<<num<<"armstrong"<<endl;
	 
	 
	 else
	 	 cout<<"\n"<<num<<" not armstrong"<<endl;
	 
	 	 return 0;
	 }
	 	 
