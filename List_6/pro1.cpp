#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream outputFile("test.txt");


    if (outputFile.is_open()) {
        
        outputFile << "Hello, this is a test." << endl;
        outputFile << "Writing to a file using C++." << endl;

        
        outputFile.close();
         cout<<"Prem Gohel"<<endl;
		cout<<"220130318003"<<endl;
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Error opening the file." << endl;
    }

    return 0;
}
