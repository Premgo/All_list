#include <iostream>
using namespace std;

class MyClass 
{
public:
    int p;
    MyClass(int val) : p(val) {}
};

void printObject(MyClass obj)
{
    cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
    cout << "The value of p is :: " << obj.p << endl;
}

int main() {
    MyClass obj1(80);
    printObject(obj1);
    return 0;
}
