#include <iostream>
using namespace std;

double AreaOfCir(double radius, double pi = 3.14) 
{
    return pi * radius * radius;
}

int main() 
{
    double radius;
    cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
    cout << "Enter a radius of the circle: ";
    cin >> radius;
    cout << "Area of circle is: " << AreaOfCir(radius) << endl;
    return 0;
}
