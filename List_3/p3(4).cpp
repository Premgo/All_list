#include<iostream>
using namespace std;

class student
{
	private:
		string name;
		int age;
		
	public:
		void get_details()
		{
			cout<<"Prem Gohel"<<endl;
			cout<<"220130318003"<<endl;
			cout<<"Enter name:";
			getline(cin,name);
			cout<<"Enter age:";
			cin>>age;
			}	
			void display_details()
			{
				cout<<"Name:"<<name<<endl;
				cout<<"Age:"<<age<<endl;
			}
};

int main()
{
	student s1;
	s1.get_details();
	s1.display_details();
	
	return 0;
}
