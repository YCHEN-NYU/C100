#include <iostream>
#include <fstream>
#include "Point.h"
using namespace std;

int main(){
    Point origin(2, 3);
    cout << origin << endl;
    ofstream fout("out.txt");
    fout << origin << endl;

    Point center;
    operator>>(cin, center); 
    cout << center << endl;

    Point mid;
    ifstream fin("in.txt");
    operator>>(fin, mid);
    cout << mid << endl;

    mid++;
    cout << mid << endl;
    return 0;
}
