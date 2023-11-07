#include <iostream>
using namespace std;

class item{
	private:
		int number;
		float cost;
	public:
			
		void displaydata()
		{
			cout<<"Prem Gohel"<< endl;
            cout<<"ER NO. 220130318003"<< endl;
			cout<<"Number :: "<<number<<endl;
			cout<<"Cost :: "<<cost;
		}
		void getdata();
};

void item::getdata()
		{
			cout<<"Enter Number :: ";
			cin>>number;
			cout<<"Enter Cost :: ";
			cin>>cost;
		}
		
int main()
{
	item i;
	i.getdata();
	i.displaydata();
}
