#include<iostream>
using namespace std;
int main()
{
 
 int number, arr[5];
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
	 cout<<endl;
	cout<<"odd number";
	   for(int i=0; i<5; i++)
	   {
	
	if(arr[i]%2!=0)
{      
     cout<<arr[i]<<"\t";
}

	   }
return 0;
}
