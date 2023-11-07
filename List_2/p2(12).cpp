#include<iostream>
using namespace std;
int add(int p,int j,int m=0,int k=0)
{
	return (p + j + m + k);
	
}

int main()
{
	cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
	cout<<add(10,15)<<endl;
	cout<<add(10,15,20)<<endl;
	cout<<add(10,15,20,25)<<endl;
	
	return 0;
}
