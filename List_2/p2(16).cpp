#include <iostream>
using namespace std;


int area(int side) 
{
    return side * side;
}


int area(int len, int bre) 
{
    return len * bre;
}


float area(float radius) 
{
    const float pi = 3.14;
    return pi * radius * radius;
}

int main() 
{
    int s, len, bre;
    float radius ;
    cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
    
    cout << "Enter the side of a square: ";
    cin >> s;
    cout << "Enter the length and breadth of a rectangle: ";
    cin >> len >> bre;
    cout << "Enter the radius of a circle: ";
    cin >> radius;
   
    cout << "Area of the square is: " << area(s) << endl;
    cout << "Area of the rectangle is: " << area(len, bre) << endl;
    cout << "Area of the circle is: " << area(radius) << endl;

    return 0;
}
