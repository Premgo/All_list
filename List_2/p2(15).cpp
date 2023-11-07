#include<iostream>
using namespace std;
inline int square(int r)
{
	return r * r * r;
}

int main()
{
	int r;
	cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
    cout<<"Enter the number :";
    cin>>r;
    cout<<"the square is "<<r<<" and "<<square(r)<<endl;
    
    return 0;
}
