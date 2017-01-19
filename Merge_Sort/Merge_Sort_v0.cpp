#include <iostream>
using namespace std;

void print_array(int array[], int size_of_array) {
    for(int i = 0; i < size_of_array; ++i) {
        cout << *(array + i) << " ";
        if((i+1)%10 == 0) cout << endl;
    }
}


int main(){

