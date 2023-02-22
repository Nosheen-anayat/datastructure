#include<iostream>
using namespace std;
int main()
{
 
 int  arr[5];
 cout<<"enter five number"<<endl;
 	for(int i=0; i<5; i++)
{
	cout<<"values"<<i+1<<":";
	cin>>arr[i];
}
     for(int i=0; i<5; i++)
     {
     	cout<<arr[i]<<"\t";
	 }
	 cout<<"reversed array is"<<endl;
	
	   for(int i=4; i>=0; i--)
	   {

     cout<<arr[i]<<endl;
}
   return 0;
}
