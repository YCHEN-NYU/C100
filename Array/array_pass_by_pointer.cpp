#include <iostream>
using namespace std;

void print_array(const int *array, const int array_size){
    cout << "sizeof(array) in print_array = " <<  sizeof(array) << endl;
    for(int i = 0; i < array_size; ++i)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;
}

int max_of_array(const int *array, const int array_size){
    cout << "sizeof(array) in max_of_array = " <<  sizeof(array) << endl;
    int max = *array;
    for(int i = 0; i < array_size; ++i)
    {
        if(max < *(array + i)) max = *(array + i);
    }
    return max;
}

void replace_all_by_max(int *array, const int array_size)
{
    cout << "sizeof(array) in replace_all_by_max = " << sizeof(array) << endl;
    cout << "sizeof(*array) in replace_all_by_max = " << sizeof(*array) << endl;
    cout << "array_size = " << array_size << endl;
    int max = max_of_array(array, array_size);
    for(int i = 0; i < array_size; ++i)
    {
        *(array + i) = max;
    }
}

int main()
{
    int const_array[] = {1, 2, 3, 4, 5};
    const int array_size = sizeof(const_array)/sizeof(*const_array);
    cout << "sizeof(array) in main() = " << sizeof(const_array) << endl;
    cout << "sizeof(*array) in main() = " << sizeof(*const_array) << endl;
    print_array(const_array, array_size);
    replace_all_by_max(const_array, array_size);
    print_array(const_array, array_size);
    return 0;
}
