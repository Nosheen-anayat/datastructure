#include<iostream>
using namespace std;
int main()
{
 
 int sum, arr[5];
   sum =  0;
   
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

	
	   for(int i=0; i<5; i++)
	   {
	
	sum=sum +arr[i];
{      
     cout<<"sum"<<sum;
}

	   }
return 0;
}
