#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass(int val) : value(val) {}

    void printValue() {
        cout << "Value: " << value << endl;
    }

    MyClass add(const MyClass& other) {
        return MyClass(this->value + other.value);
    }

private:
    int value;
};
int main() {
    MyClass obj1(12);
    MyClass obj2(42);
    
    cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
    cout << "Object 1:" << endl;
    obj1.printValue();

    cout << "Object 2:" << endl;
    obj2.printValue();

    
    MyClass obj3 = obj1.add(obj2);

    cout << "After adding Object 1 and Object 2:" << endl;
    obj3.printValue();

    return 0;
}
