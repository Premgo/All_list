#include<iostream>
using namespace std;

class Addition {
    private:
        int num1, num2;

    public:
        Addition(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }
        friend int add(Addition &obj);
};

int add(Addition &obj) {
    return obj.num1 + obj.num2;
}
int main() {
    int num1, num2;

    cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Addition addition(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is " << add(addition) << endl;
    return 0;
}
