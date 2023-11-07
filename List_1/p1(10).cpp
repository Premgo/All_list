#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Prem Gohel";
	cout<<"220130318003";
	cout<<"Enter three number:";
	cin>>x>>y>>z;
	if(x>=y&&x>=z)
		cout<<"largest number is:"<<x;
		else if(y>=x&&y>=z)
		cout<<"largest number is:"<<y;
		else
		cout<<"largest number is:"<<z;
	return 0;
	
}
