#include<iostream>
using namespace std;
int main()
{
 int arr[5];
 int c;
 	for(int i=0; i<5; i++)
{
	cout<<"values"<<i+1<<":";
	cin>>arr[i];
}
    cout<<"values are";
     for(int i=0; i<5; i++)
     {
     	cout<<arr[i]<<"\t";
	 }
	  cout<<"enter a number that you want to repeat";
	  cin >>c;
	  int count=0;
	  for(int i=0; i<5; i++)
	   {
	   	if(c==arr[i])
	   	count ++;
	  }
	  cout<<"value found in arr"<<count;
	     return 0;
	     
	 }
	  
	  
	  
	  
	  
