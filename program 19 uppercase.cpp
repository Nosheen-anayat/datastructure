#include<iostream>
#include<string>
using namespace std;
int main()
{
	string strl;
	cout<<"enter a string"<<endl;
	cin>>(strl);
	for(int i=0; strl[i]!='\0';i++)
	{
		if(strl[i]>='a' && strl[i]<='z')
		{
			strl[i]=strl[i]-32;
			
		}
	}
	  cout<<"string in uppercase:"<<endl;
	  cout<<strl;
	  return 0;
}
