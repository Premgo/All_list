#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float pri,rate,time,ci;
	
	cout<<"Prem gohel"<<endl;
	cout<<"ER No.220130318003";<<endl;
	
	cout<<"Enter principal:";
	cin>>pri;
	cout<<"Enter rate:";
	cin>>rate;
	cout<<"Enter time:";
	cin>>time;
	
	ci=pri*(pow((1+rate/100),time))-pri;
    cout<< "The compound interest is "<<ci;
	
	return 0;
}
