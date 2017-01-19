#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<string, int> fruit = {{"Apple", 1}, {"Banana", 2}, {"Lemon", 3}};
  
  cout << "naive print: " << endl;
  cout << "#ofApple = " << fruit["Apple"] << endl;
  cout << "#ofBanana = " << fruit["Banana"] << endl;
  cout << "#ofLemon = " << fruit["Lemon"] << endl;
  cout << "fruit.size() = " << fruit.size() << endl;
  cout << endl;

  cout << "find: " << endl;
  cout << "key = ";
  string key_value;
  cin >> key_value;
  map<string, int>::iterator it;
  it = fruit.find(key_value);
  if (it != fruit.end())
    cout << it->first << " | " <<  it->second << endl;

  cout << "\nprint all: " << endl;
  for (map<string,int>::iterator it = fruit.begin(); it != fruit.end(); ++it){
    cout << it->first << " | " << it->second << endl;
  }


  return 0;
}
