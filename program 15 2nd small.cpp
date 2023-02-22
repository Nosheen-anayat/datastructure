#include<iostream>
using namespace std;
int main()
{
 
 int  arr[5]; 
 int small;
 int second_small;
 cout<<"enter five number"<<endl;
 	for(int i=0; i<5; i++)
cin>>arr[i];
small=arr[1];
	for(int i=0; i<5; i++)
	{
		if(small>arr[i])
		small=arr[i];
	}
	 second_small=arr[1];
	 	for(int i=0; i<5; i++)
	 	{
	 			if(second_small>arr[i])
	 			{
	 				if(arr[i]!=small)
	 				second_small=arr[i];
				 }
		 }
		 cout<<"\nsecond smallest number"<<second_small<<endl;
		 return 0;
	}
