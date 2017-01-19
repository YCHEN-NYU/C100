#include <iostream>
#include <string>
using namespace std;

int main(){
  string hello = "hello";
  cout << hello << endl;
  cout << hello[1] << "..." << hello[-1] << endl;

  string goodmorning = "Good Morning!";
  string good = goodmorning.substr(0, 4);
  cout << good << endl;

  string morning = goodmorning.substr(5, -2);
  cout << morning << endl;

  return 0;
}
