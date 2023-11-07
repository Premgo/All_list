#include <iostream>
using namespace std;

class Max 
{
private:
  int n_1;
  int n_2;

public:
  void input() 
  {
    cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
    cout << "Enter two numbers: ";
    cin >> n_1 >> n_2;
  }

  void display() 
  {
    cout << "The two numbers are: " << n_1 << " and " << n_2 << endl;
  }

  void largest() 
  {
    if (n_1 > n_2) 
	{
      cout << "The largest number is: " << n_1 << endl;
    }
	 else 
	{
      cout << "The largest number is: " << n_2 << endl;
    }
  }
};

int main() {
  Max obj;
  obj.input();
  obj.display();
  obj.largest();

  return 0;
}
