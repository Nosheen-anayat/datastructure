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
cout<<endl;
cout<<"\ntotal number in array:"<<endl;
for(int i=0; i<5; i++)
{
		cout<<arr[i]<<"\t";
}
 cout<<endl;
 cout<<"the sorted array in descending order is:";
 	for(int i=0; i<5; i++)
 	{
 			for(int j=i+1; j<5; j++)
 			{
 				if(arr[i]<arr[j])
 				{
 					int temp=0;
 					temp=arr[i];
 					arr[i]=arr[j];
 					arr[j]=temp;
				 }
			 }
		cout<<arr[i]<<"\t";	 
	 }
	 return 0;
}
