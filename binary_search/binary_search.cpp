#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> first_array = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result;
    vector<int>::iterator temp;
    for(vector<int>::iterator it = first_array.begin(); it < first_array.end(); ++it){
      temp = find(first_array.begin(), first_array.end(), target - *it);
      if(temp != first_array.end())
      {
          result.push_back(distance(first_array.begin(), it);
          result.push_back(distance(first_array.begin(), temp));
          break;
      }
      
    }

    return 0;
}
