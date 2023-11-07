#include <iostream>
using namespace std;

class Distance 
{
    private:
        int meter;
        
        
        friend int addFive(Distance);

    public:
        Distance() : meter(0) {}
        
};


int addFive(Distance d) 
{
    d.meter += 5;
    return d.meter;
}

int main() 
{
    Distance D;
    cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
    cout << "Distance: " << addFive(D);
    return 0;
}
