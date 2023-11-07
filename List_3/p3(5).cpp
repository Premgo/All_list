#include<iostream>
using namespace std;

class Distance
{
	private:
		int feet,inches;
		
	public:
		void getDistance()
		{
			cout<<"Prem Gohel"<<endl;
			cout<<"220130318003"<<endl;
			cout<<"Enter the feet ::";
			cin>>feet;
			cout<<"Enter inches ::";
			cin>>inches;
			}	
			
			void displayDistance()
			{
				cout<<"Feet ::"<<feet<<endl;
				cout<<"Inches ::"<<inches<<endl;
			}
			
			
};

int main()
{
	Distance d;
	d.getDistance();
	d.displayDistance();
	
	return 0;
	
}
