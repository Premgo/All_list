#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    private:
        int numA;

        
        friend class ClassB;

    public:
        
        ClassA() : numA(20) {}
};
class ClassB {
    private:
        int numB;

    public:
       
        ClassB() : numB(2) {}
    
   	    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};
int main() {
    ClassB objectB;
    cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
    cout << "Sum is :: " << objectB.add();
    return 0;
}
