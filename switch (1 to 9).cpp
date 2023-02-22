#include<iostream>
using namespace std;
int main()
{
	
 int number ,arr[5];
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
cout<<"press 1 for finding minimum number \n";
cout<<"press 2 for finding maximum number \n";
cout<<"press 3 for finding search and check number is present in array or not \n";
cout<<"press 4 for finding  number \n";
cout<<"press 5 for finding odd number \n";
cout<<"press 6 for finding even number \n";
cout<<"press 7 for finding sum of number \n";
cout<<"press 8 for finding reverse number \n";
cout<<"press 9 for finding all unique element \n";
cout<<"enter any number from 1 to 9 \t";
cin>>number;
switch(number)
{
	case 1:
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
	   for(int i=0; i<5; i++)
	   {
	   	if(min>arr[i])
	   min=arr[i];
	   
}
cout<<"minimum value is"<<min;
}
break;

    case 2:
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
	  int max=arr[5]; 
	   for(int i=0; i<5; i++)
	   {
	   	
	   if(max<arr[i])
	   max=arr[i];
}
cout<<"maximum value is"<<max;
} 
break;

case 3:
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
break;

case 4:
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
}
break;

case 5:
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
	   break;

case 6:
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
	   break;

case 7:
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
	   break;

case 8:
{
 
 int  arr[5];
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
	 cout<<"reversed array is"<<endl;
	
	   for(int i=4; i>=0; i--)
	   {

     cout<<arr[i]<<endl;
}
break;

case 9:
{
	int arr[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter a value"<<i+1<<" : ";
		cin>>arr[i];
	}
	  int unique;
	  	for(int i=0; i<5; i++)
{
	if(unique>=arr[i])
	{
		unique=arr[i];
	}
	cout<<"unique element is"<<unique;
}
break;
default:
cout<<"invalid ";
}
	return 0;


}
}}}}}













































