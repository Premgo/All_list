#include <iostream>
using namespace std;

class Product 
{
public:
    int manufactureYear;
    int expiryYear;

    Product(int manufactureYear, int expiryYear)
	{
        this->manufactureYear = manufactureYear;
        this->expiryYear = expiryYear;
    }
};

int calculateDifference(const Product& product) 
{
    return product.expiryYear - product.manufactureYear;
}

int main() 
{
    int manufactureYear, expiryYear;
    
   cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
    cout << "Enter the manufacture year: ";
    cin >> manufactureYear;

    cout << "Enter the expiry year: ";
    cin >> expiryYear;

    Product product(manufactureYear, expiryYear);

    int difference = calculateDifference(product);

    cout << "The difference between manufacture year and expiry year is: " << difference << " years." << endl;

    return 0;
}
