#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num = 909192.90;

    cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
    
    cout << fixed << setprecision(3) << num << endl;
    cout << fixed << setprecision(4) << num << endl;
    cout << fixed << setprecision(5) << num << endl;
    cout << fixed << setprecision(7) << num << endl;

    return 0;
}
