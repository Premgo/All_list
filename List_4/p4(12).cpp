#include<iostream>
using namespace std;
class area{
	int k,p;
	public:
		area()
		{
			cout<<"Enter the value of k : ";
			cin>>k;
			cout<<"Enter the value of p  : ";
			cin>>p;	
		} 
		area(area &r)
		{
			k = r.k;
			p = r.p;
			cout<<"Ans : "<<k*p;
		}
};
int main()
{
	cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
	area a2;
	area a1(a2);
}
