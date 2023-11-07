#include<iostream>
using namespace std;
class large
{
	public :
		static int p;
		void display()
		{
			cout<<"Prem Gohel"<<endl;
			cout<<"220130318003"<<endl;
			cout<<"Value of p is  ::"<<p<<endl;
		}
		
};
int large ::p=3;
int main()
{
	large l1;
	l1.display();
	
	return 0;
}
	

