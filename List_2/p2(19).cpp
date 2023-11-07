#include <iostream>
using namespace std;

void call_by_ref(int &p, int &r,int *m) 
{
  *m = p + r;
}

int main() 
{
  int p,r,m; 
  
    cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
    
    cout<<"Enter two number ";
    cin>>p>>r;
	
	call_by_ref(p,r,&m);  
    cout << "Sum is :"<< m <<endl;

  return 0;
}
