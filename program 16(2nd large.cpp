#include<iostream>
using namespace std;
int main()
{
 
 int  arr[5]; 
 int large;
 int second_large;
 cout<<"enter five number"<<endl;
 	for(int i=0; i<5; i++)
cin>>arr[i];
large=arr[1];
	for(int i=0; i<5; i++)
	{
		if(large<arr[i])
		large=arr[i];
	}
	 second_large=arr[1];
	 	for(int i=0; i<5; i++)
	 	{
	 			if(second_large<arr[i])
	 			{
	 				if(arr[i]!=large)
	 				second_large=arr[i];
				 }
		 }
		 cout<<"\nsecond largest number"<<second_large<<endl;
		 return 0;
	}
