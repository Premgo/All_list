#include<iostream>
using namespace std;
int main()

{
	
	int a,b,sum,sub,mul,div,mod,avg;
	cout<<"Prem Gohel";
	cout<<"220130318003";
	cout<<"enter the value of a::";
	cin>>a;
	
	cout<<"enter the value of b::";
	cin>>b;
	
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	avg=sum/2;
	
	
	cout<<"Addition of a and b is      :"<<sum<<endl;
	cout<<"Substraction of a and b is  :"<<sub<<endl;
	cout<<"Multiplication of a and b is:"<<mul<<endl;
	cout<<"Division of a and b is      :"<<div<<endl;
	cout<<"Modulo of a and b is        :"<<mod<<endl;
	cout<<"Average of a and b is       :"<<avg<<endl;
	
	return 0;	
}


