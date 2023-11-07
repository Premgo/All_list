#include<iostream>
using namespace std;

int p;


int& returnbyref()
{
	return p;
}

int main()
{
	returnbyref()=69;
	cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
	cout<<p;
	
	return 0;
}
