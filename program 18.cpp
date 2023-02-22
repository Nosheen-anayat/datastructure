#include<iostream>
using namespace std;
int main()
{
	int arr1[5], arr2[5], i, merge[5];
	cout<<"enter elements of first array"<<endl;
	for(i=0; i<5; i++)
	{
		cout<<"values"<<i+1<<" : "<<"\t";
		cin>>arr1[i];
	}
		cout<<"enter elements of second array"<<endl;
	for(i=0; i<5; i++)
	{
			cout<<"values"<<i+1<<" : "<<"\t";
		cin>>arr2[i];
	}
	for(i=0; i<5; i++)
	{
	merge[i]=arr1[i];
    }
      for(i=0; i<5; i++)
      {
      merge[i+1]=arr2[i];
  }
  cout<<"merged array";
  for(i=0; i<5; i++)
  {
  	cout<<merge[i]<<endl;
  }
  return 0;
  
  }
