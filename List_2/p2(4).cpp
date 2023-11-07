#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    int num = 50;
    double d1 = 3.14;
    string str = "Jay Shree Ram";

    cout << "Number: " << setw(5) << num << endl;
    cout << "Double: " << setw(10) << d1 << endl;
    cout << "String: " << setw(20) << str <<endl;

    return 0;
}
