#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main () {
  vector<int> nums = {2, 7, 11, 15}; 
  int target = 13;
  vector<int> result;
  unordered_map<int, int> temp_map;

  for (auto it = nums.begin(); it != nums.end(); ++it) {
    int number_to_find = target - *it;

    if(temp_map.find(number_to_find) != temp_map.end()) {
      result.push_back(temp_map[number_to_find]);
      result.push_back(distance(nums.begin(), it));
    }

    temp_map[*it] = distance(nums.begin(), it);
  }

  if(result.empty()){
    cout << "no target found!" << endl;
  }
  else {
  cout << result[0] << " " << result[1] << endl;
  }
}

