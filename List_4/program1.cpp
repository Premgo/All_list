#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string emp_name;

public:
    void getdata()
    {
    	
        cout << "Enter employee ID: ";
        cin >> emp_id;
        cout << "Enter employee name: ";
        cin >> emp_name;
    }

    void putdata()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee name: " << emp_name << endl;
    }
};

int main()
{
    int n;
    cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++)
    {
        emp[i].getdata();
    }

    cout << "Employee details:" << endl;
    for (int i = 0; i < n; i++)
    {
        emp[i].putdata();
    }

    return 0;
}
