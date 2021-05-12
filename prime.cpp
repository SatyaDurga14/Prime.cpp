//prime or not
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int fc=0;    //fc=factor count
	cout<<"Enter a number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			fc++;
		}
		else
		 continue;
	}
	if(fc==2){
		cout<<"prime number";
	}
	else
	{
	  cout<<"not prime";
	}
}
