#include<iostream>
using namespace std;
void swap(int &p,int &m)
{
	int temp=p;
	p=m;
	m=temp;
	
}

int main()
{
	int n1=10,n2=01;
	cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
    cout<<"before swapping number 1 ="<<n1<<"number 2 ="<<n2<<endl;
    
    swap(n1,n2);
    
    cout<<"after swapping number 1 ="<<n1<<"number 2 ="<<n2<<endl;
    
    return 0;
}
