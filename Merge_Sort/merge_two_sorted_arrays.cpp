#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    int first_array[] = {-100, 1, 3,4,  8, 10, 34, 78, 333, 87}, second_array[] = {-1, 0, 2, 7, 89, 233, 766, 1000};
    vector<int> merge_array;
    int size_of_first_array = sizeof(first_array)/sizeof(*first_array);
    int size_of_second_array = sizeof(second_array)/sizeof(*second_array);
    int size_of_array = size_of_first_array + size_of_second_array; 

    string double_line = string(80, '=');
    int k = 0, l = 0, count = 0;
    while(k < size_of_first_array && l < size_of_second_array)
    {    if(first_array[k] < second_array[l]) {
            merge_array.push_back(first_array[k]);
            ++k;
            ++count;
        }
        else{
            merge_array.push_back(second_array[l]);
            ++l;
            ++count;
        }
        
        cout << double_line << endl;
        for(vector<int>::iterator it = merge_array.begin(); it < merge_array.end(); ++it)
            cout << *it << " ";
        cout << endl;
    }

    // insert all the remaining pieces into the merge_array
    cout << double_line << endl;
    if(k < size_of_first_array){
        for(int i = k; i < size_of_first_array; ++i)
            merge_array.push_back(first_array[i]);
            ++count;
        }
    else{
        for(int i = l; i < size_of_second_array; ++i)
            merge_array.push_back(second_array[i]);
            ++count;
        } 
    
    for(int i = 0; i < size_of_array; ++i)
        cout << merge_array[i] << " ";
    cout << endl;

    cout << "total size = " << size_of_array << endl;
    cout << "count = " << count << endl;
    return 0;
}


