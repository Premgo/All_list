#include <iostream>
using namespace std;

class maximumfinder 
{
  public:
  int findmaximum(int p, int r, int m) 
  {
    int max = p;
    if (r > max)
	{
      max = r;
    }
    if (m > max) 
	{
      max = m;
    }
    return max;
  }
};

int main() 
{
  maximumfinder mf;
  int p, r, m;
  cout<<"Prem Gohel"<< endl;
  cout<<"ER NO. 220130318003"<< endl;
  cout << "Enter three numbers: ";
  cin >> p >> r >> m;
  int max = mf.findmaximum(p, r, m);
  cout << "The maximum number is: " << max << endl;
  return 0;
}
