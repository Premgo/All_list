#include<iostream>
using namespace std;
class area{
	int length,breath;
	public:
		area()
		{
			length=10;
			breath=30;
		}
		void display()
		{
			cout<<"Area of reatangle : "<<length*breath<<endl;
		}	
		~area(){
		cout<<"Destructor called";}
};
int main()
{
	cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
	area a1;
	a1.display();
}

