#include<iostream>
using namespace std;
int p=20;
int main()
{
	int p=25;
	
	cout<<"value of Global p is "<<::p<<endl;
	cout<<"value of Local p is "<<p;
	
	return 0;

}
