#include <iostream>
using namespace std;


int sum(int p, int r) 
{
    return p + r;
}


int sum(int p, int r, int m) 
{
    return p + r + m;
}


double sum(double p, double r) 
{
    return p + r;
}

int main() 
{   
    cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
    
    cout << "Sum of 15 and 25:: " << sum(15,25) << endl;
    cout << "Sum of 15, 25 and 35:: " << sum(15, 25, 35) << endl;
    cout << "Sum of 2.5 and 3.5:: " << sum(5.5, 3.5) << endl;

    return 0;
}
