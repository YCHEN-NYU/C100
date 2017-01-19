#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

template <typename T>
void print_array(vector<T> vec){
    for(auto it = vec.begin(); it != vec.end(); ++it) {
        cout << distance(vec.begin(), it) << " | " << *it << endl;
    }
}

int main() {
    vector<int> init_vec={-100, 1, 3, 4, 8, 10, 34, 78, 333, 87};
    string double_line = string(20, '=') + "\n";
    cout << double_line;
    print_array(init_vec);
    sort(init_vec.begin(), init_vec.end());
    cout << double_line;
    print_array(init_vec);
    return 0;
}

