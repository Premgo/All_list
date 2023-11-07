#include<iostream>
using namespace std;
int main()
{
	int j[3];
	cout<<"Prem Gohel";
	cout<<"220130318003";
	for(int i=0;i<3;i++)
	{
		cout<<"Enter Array elements 1by1  :";
		cin>>j[i];
	}
	for(int i=0;i<3;i++)
	{
		if(j[i]<0)
		cout<<"Negative elements are :"<<j[i];<<endl;
		
	}
	return 0;
}
