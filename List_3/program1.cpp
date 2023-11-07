#include<iostream>
using namespace std;
struct student
{
	string name;
	int std;
	float per;
	
};
int main()
{
	cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
	student s3;
	cout<<"Enter the name: ";
	cin>>s3.name;
	cout<<"Enter the std: ";
	cin>>s3.std;
	cout<<"Enter the percentage: ";
	cin>>s3.per;
	
	cout<<"Student details:"<<endl;
	cout<<"name: "<<s3.name<<endl;
	cout<<"std: "<<s3.std<<endl;
	cout<<"percentage: "<<s3.per<<endl;
	
	return 0;
}
