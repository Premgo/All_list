#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

  
    friend double calculateArea(const Rectangle& rect);
};

double calculateArea(const Rectangle& rect) 
{
    return rect.length * rect.width;
}

int main() 
{
    double length, width;

    cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rect(length, width);

    double area = calculateArea(rect);

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
