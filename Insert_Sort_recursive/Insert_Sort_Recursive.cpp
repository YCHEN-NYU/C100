#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

// recursive insertion sort
                

void insert_sort(vector<int> unsorted_vect){
    if(unsorted_vect.size() > 2)
    {
        insert_sort(unsorted_vect(unsorted_vect.begin(), unsorted_vect.end() -1));
        for(vector<int> it = unsorted_vect.begin(); it != unsorted_vect.end() -1; ++it){
            if(*unsorted_vect.end() < *it){
                
    }
    else
        cout << "sort 2-element vector" << endl;
}
int main()
{
    vector<int> unsorted_array;
    int array_size = 10;
    srand(time(NULL));
    string double_line = string(80, '=') + "\n";
    cout << double_line;
    for(int i = 0; i < array_size; ++i){ 
        unsorted_array.push_back(rand()%100);
        srand(rand());
    }

    for(vector<int>::iterator it = unsorted_array.begin(); it < unsorted_array.end(); ++it){
        if((distance(unsorted_array.begin(), it) + 1)%10 == 1) 
            cout << endl;
        cout << setw(5) << *it << " ";
    }
    cout << endl;
    
    insert_sort(unsorted_array);
    



    return 0;
}
    
