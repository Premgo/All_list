#include<iostream>
using namespace std;

inline int cube(int p)
{
	return p * p * p;
}

int main()
{
	int p;
	cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
	cout<<"Enter the number :";
	cin>>p;
	cout<<"the cube is "<<p<<" and "<<cube(p)<<endl;
	return 0;
}
