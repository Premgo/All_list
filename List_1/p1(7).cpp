#include<iostream>
using namespace std;
int main()
{
	float Pri,Time,Rate,SI;
	cout<<"Prem Gohel";
	cout<<"220130318003";
	
	cout<<"Enter the Principal of Amount:";
	cin>>Pri;
	
	cout<<"Enter Time :";
	cin>>Time;
	
	cout<<"Enter Rate of interest:";
	cin>>Rate;
	
	SI=(Pri*Rate*Time)/100;
	
	cout<<"Simple Interest :"<<SI<<endl;
	
	return 0;
}
