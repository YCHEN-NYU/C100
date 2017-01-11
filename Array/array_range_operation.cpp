#include <iostream>
using namespace std;

int sum(const int *begin, const int *end)
{
    int sum = 0;
    for(const int *ptr = begin; ptr != end; ptr++)
        sum += *ptr; 
    return sum;
}

int main()
{
    int array[] = {1, 3, 8, 6, 9, 2, 4, 10, -1, 0};
    int array_size = sizeof(array)/sizeof(*array);
    cout << "sum = " << sum(array, array + 2) << endl;
    cout << "sum = " << sum(array + 2, array + 5) << endl;
    cout << "sum = " << sum(array, array + array_size) << endl;

    return 0;
}

