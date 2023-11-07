#include<iostream>
using namespace std;
struct Employee
{
	string emp_name;
	int emp_code;
	float emp_salary;
	string emp_branch;
};
int main()
{
	Employee emp3;
	
	cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
	
	cout<<"Enter the employee name : ";
	cin>>emp3.emp_name;
	cout<<"Enter the employee code : ";
	cin>>emp3.emp_code;
	cout<<"Enter the employee salary : ";
	cin>>emp3.emp_salary;
	cout<<"Enter the employee branch : ";
	cin>>emp3.emp_branch;
	
	cout<<"Employee details:"<<endl;
	cout<<"Employee name:   "<<emp3.emp_name<<endl;
	cout<<"Employee code:   "<<emp3.emp_code<<endl;
	cout<<"Employee salary: "<<emp3.emp_salary <<endl;
	cout<<"Employee branch: "<<emp3.emp_branch<<endl;
	
	return 0;
}
