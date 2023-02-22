#include<iostream>
using namespace std;
int main()
{ 
int number,  arr[5];
{
	for(int i=0; i<5; i++)
	{ 
	cout<<"enter values"<<i+1<<" : ";
	cin>>arr[i];
	}
	cout<<"enter 11 for searching separate even and odd"<<endl;
	cout<<"enter 12 for searching count odd and even"<<endl;
	cout<<"enter 13 for searching sort element in ascending"<<endl;
	cout<<"enter 14 for searching sort element in descending"<<endl;
	cout<<"enter 15 for searching 2nd smallest element"<<endl;
	cout<<"enter 16 for searching 2nd largest element"<<endl;
	cout<<"enter 17 for searching two array same or not"<<endl;
	cout<<"enter 18 for searching merge two unsorted array"<<endl;
	cout<<"enter 19 for searching maximum the diff between two element"<<endl;
    cout<<"enter any number from 11 to 19\t"<<endl;
    cin>>number;
}
    switch(number)
    {
    	case 1:
    		{
 int number, arr[5];
 cout<<"enter five number"<<endl;
 	for(int i=0; i<5; i++)
{
	cout<<"values"<<i+1<<":";
	cin>>arr[i];
}
     for(int i=0; i<=5; i++)
     {
     	cout<<arr[i]<<"\t";
	 }
	 cout<<endl;
	cout<<"even number";
	   for(int i=0; i<5; i++)
	   {
	
	if(arr[i]%2==0)
{      
     cout<<arr[i]<<"\t";
}
}
   cout<<"odd number";
   for (int i=0; i<5; i++)
   {
   		if(arr[i]%2!=0)
   		{
   		cout<<arr[i]<<"\t";	
		   }
   }
   break;
   case 2:
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
 }
 break;
 case 3:
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
 cout<<"the sorted array in ascending order is:";
 	for(int i=0; i<5; i++)
 	{
 			for(int j=i+1; j<5; j++)
 			{
 				if(arr[i]>arr[j])
 				{
 					int temp=0;
 					temp=arr[i];
 					arr[i]=arr[j];
 					arr[j]=temp;
				 }
			 }
		cout<<arr[i]<<"\t";	 
	 }
	 break;
	 case 4:
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
	 break;
	 case 5:
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
	}
	break;
	case 6:
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
}
break;
case 7:
	{
	int arr1[5], arr2[5], i;
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
		if(arr1[i]==arr2[i])
		cout<<"equal"<<endl;
		else
		cout<<"not equal"<<endl;
	}
	break;
	case 8:
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
  break;
  defualt:
  	cout<<"invalid";

}
  return 0;
}
}
}
}
}		 
}	 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
   
   


	


