#include<iostream>
using namespace std;

class shape
{
	public:
		int height;
		int base;
		void displayshape()
		{
			cout<<"Prem Gohel"<<endl;
			cout<<"220130318003"<<endl;
			cout<<"Height ::"<<height<<endl;
			cout<<"Base   ::"<<base<<endl;
		}
		
};

int main()
{
	shape s1;
	s1.height =20;
	s1.base   =10;
	s1.displayshape();
	return 0;
}
