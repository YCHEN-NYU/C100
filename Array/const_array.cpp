#include <iostream>
using namespace std;

void print_array(const int array[], const int array_size) {
    for(int i = 0; i < array_size; ++i)
    {
        cout << *(array+i) << " ";
    }
    cout << endl;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    const int array_size = sizeof(array)/sizeof(*array);
    cout << "array_size = " << array_size << endl;
    print_array(array, array_size);
    return 0;
}
