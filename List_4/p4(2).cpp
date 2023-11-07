#include <iostream>
using namespace std;

class example
{
public:
  static void print() 
  {
    cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
    cout << "This is a static member function" << endl;
  }
};

int main() {
  example::print();  
  return 0;
}
