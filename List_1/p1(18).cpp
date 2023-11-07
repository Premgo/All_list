#include <iostream>
using namespace std;

int main() 
{
    int expo;
    float base, res = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> expo;

    cout << base << "^" << expo << " = ";

    while (expo != 0) {
        res *= base;
        --expo;
    }

    cout << res;
    
    return 0;
}
