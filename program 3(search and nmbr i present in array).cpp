#include<iostream>
using namespace std;
int main()
{
 int arr[5];
 cout<<"enter five values"<<endl;
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
	   int min=arr[0];
	   bool flag;
	   for(int i=0; i<5; i++)
	   {
	   	if(min==arr[i])
	   	flag++;
	   }
       cout<<endl<<"the minimum value is"<<min;
              if(flag==1)
	   cout<<endl<<"value found";
	   else
	   {
	   
	   cout<<endl<<"value not found";   
}
	   
} 

    
      



	   
	
