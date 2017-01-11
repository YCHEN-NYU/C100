#include <iostream>
using namespace std;

int main()
{
    enum Color{
        RED, GREEN, BLUE
    } myColor;

    myColor = RED;
    Color yourColor;
    yourColor = GREEN;

    cout << myColor << endl;
    cout << yourColor << endl;

    return 0;
}


