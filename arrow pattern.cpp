#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=0;i<=n/2;i++)
	{
		if(i==n/2)
		{
			for(int i=0;i<=n;i++)
			{
				cout<<"*";
			}
		}
		else
		{
		for(int j=0;j<(n-n/2+i);j++)
		{
			cout<<" ";
		}
		cout<<"*";
      }
	
		  cout<<endl;
	}
	for(int i=n/2;i>0;i--)
	{
		for(int j=0;j<(n-n/2+i);j++)
		{
			cout<<" ";
		}
		cout<<"*";
		cout<<endl;
	}
	 
}
