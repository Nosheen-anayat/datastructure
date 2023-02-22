#include<iostream>
using namespace std;
int main()
{
  int y,d,w;
  cout<<"number of days"<<endl;
  cin>>d;
  y=d/365;
  d=d%365;
  w=d/7;
  
  cout<<"\nyears"<<y<<"\nweek"<<w<<"\nday"<<d<<endl;
  return 0;	
}
