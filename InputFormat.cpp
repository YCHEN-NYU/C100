#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace  std;

int main()
{
    string areaCode, phoneCode;
    string inStr;

    cout << "Enter your phone number in this format (xxx)xxx-xxxx: ";
    cin.ignore();
    cin >> setw(3) >> areaCode;
    cin.ignore();
    cin >> setw(3) >> phoneCode;
    cin.ignore();
    cin >> setw(4) >> inStr;
    phoneCode += inStr;

    cout << "Phone Number is (" << areaCode << ")"
         << phoneCode.substr(0, 3) << "-"
         << phoneCode.substr(3, 4) << endl;
    return 0;
}
