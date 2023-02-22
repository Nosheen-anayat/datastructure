#include<iostream>
using namespace std;
int main()
{
 int number, arr[5];
 int even_number=0;
 int odd_number=0;
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
	if(arr[i]%2==0)
	  even_number++; 
	  else
	  odd_number++;
} 
cout<<"total even number are"<<even_number;
    
     cout<<"total odd number are"<<odd_number;

return 0;
}  
