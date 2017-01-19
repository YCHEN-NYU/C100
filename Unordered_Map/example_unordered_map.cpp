#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
  unordered_map<string, int> fruit = {{"Apple", 1}, {"Banana", 2}, {"Lemon", 3}};

  for(unordered_map<string, int>::iterator it = fruit.begin(); it != fruit.end(); ++it){
    cout << it->first << " | " << it->second << endl;
  }
  cout << endl;

  cout << "Apple = " << fruit["Apple"] << endl;

  cout << "\nFind: ";
  string search_key;
  cin >> search_key;
  if(fruit.find(search_key) != fruit.end())
    cout << (fruit.find(search_key))->first << " | " << (fruit.find(search_key))->second << endl;
  return 0;
  }
  
