#include <iostream>
#include <string>
using namespace std;

class Student {
public:
  string name;
  int spi;
};

int main() {
  // Create an array of 10 students
  Student students[10];

  // Get the name and SPI of each student
  for (int i = 0; i < 10; i++) 
  {
    cout<<"Prem Gohel"<<endl;
	cout<<"220130318003"<<endl;
    cout << "Enter the name of student " << i + 1 << ": ";
    cin >> students[i].name;
    cout << "Enter the SPI of student " << i + 1 << ": ";
    cin >> students[i].spi;
  }

  
  int highestSPI = students[0].spi;
  int highestSPIIndex = 0;
  for (int i = 1; i < 10; i++) {
    if (students[i].spi > highestSPI) {
      highestSPI = students[i].spi;
      highestSPIIndex = i;
    }
  }

  cout << "The student with the highest SPI is " << students[highestSPIIndex].name << endl;

  return 0;
}
