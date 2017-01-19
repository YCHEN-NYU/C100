#include <iostream>
#include <unordered_map>
using namespace std;

int main (){
  unordered_map<int, int> my_map = {{1, 1}, {2, 4}, {3, 9}};
  for (auto it = my_map.begin(); it != my_map.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }

  cout << "target = ";
  int target;
  cin >> target;
  if(my_map.find(target) != my_map.end())
    cout << (my_map.find(target))->first << " " << (my_map.find(target))->second  << endl;

  return 0;
}
