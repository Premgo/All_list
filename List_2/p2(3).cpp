#include <iostream>
using namespace std;

class friendClass {
public:
    void office(); 
};
void friendClass::office() 
{ 
    cout<<"Prem Gohel"<< endl;
    cout<<"ER NO. 220130318003"<< endl;
    cout<<"Jay Shree Ram";
}
int main() {
    friendClass obj;
    obj.office(); 
    return 0;
}
