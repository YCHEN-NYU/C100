#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include <iomanip> 
using namespace  std;

int main(){
    string message;
    cout  <<  "Enter a  string: ";
    cin >> message;
    cout <<  message << ", length = " << message.length() << endl;

    // flush cin up to newline (need <limits> header)
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //  Input a line to a string
    cout << "Enter a message (with spaces): ";
    getline(cin, message);
    cout << message << ", length = " << message.length() << endl;   

    cout << "IsEmpty? " << message.empty() << endl;
    
    string SubStr;
    SubStr = message.substr(0, 5);
    cout << SubStr << endl;
    cout << "IsEmpty? " << SubStr.empty() << endl;

    cout << setw(10) << message << endl;
    return 0;
}
