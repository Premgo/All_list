#include<iostream>
using namespace std;

void vowelcons(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
	||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
	{
		cout<<"Character is vowel:";
	}
	else
	{
		cout<<"Character is consonant:";
	}
}
int main()
{
	cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
	char ch;
	cout<<"Enter the character:";
	cin>>ch;
	
	vowelcons(ch);
	
	return 0;
}
