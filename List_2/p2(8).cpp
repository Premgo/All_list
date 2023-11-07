#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float km, cm, meter, inch, feet;
    cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
    cout << "Enter distance in km: ";
    cin >> km;
    cm = km * 100000;
    meter = km * 1000;
    inch = km * 39370;
    feet = km * 3280.84;
    cout << fixed << setprecision(2);
    cout << km << " km = " << cm << " cm = " << meter << " meter = " << inch << " inch = " << feet << " feet" << endl;
    return 0;
}
