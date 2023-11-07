#include<iostream>
using namespace std;
class account
{
	public :
		int a_no;
		float balance;
		int branch_code;
};

int main()
{
	account ac1;
	ac1.a_no = 634787;
	ac1.balance = 20000;
	ac1.branch_code = 5564813;
	
	cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
	cout<<"Account number ::"<<ac1.a_no <<endl;
	cout<<"Balance ::"<<ac1.balance <<endl;
	cout<<"Branch Code ::"<<ac1.branch_code <<endl; 
	
	return 0;
}
