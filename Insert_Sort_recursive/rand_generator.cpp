#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

// recursive insertion sort
                

int main()
{
    vector<int> unsorted_array;
    int array_size = 100;
    srand(time(NULL));
    for(int i = 0; i < array_size; ++i){ 
        unsorted_array.push_back(rand()%10000);
        srand(rand());
    }

    for(vector<int>::iterator it = unsorted_array.begin(); it < unsorted_array.end(); ++it){
        if((distance(unsorted_array.begin(), it) + 1)%10 == 1) 
            cout << endl;
        cout << setw(5) << *it << " ";
    }
    cout << endl;
        
    return 0;
}
    
