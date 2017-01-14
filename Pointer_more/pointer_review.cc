#include <iostream>
#include <vector>
using namespace std;

void print(int *p, int number){
  int *q;

  q = &number;
  *p = *q + 2;
  number = 7;
}

int main(){
  int *q, number = 1, something = 2;
  q = &something;
  cout << "q = " << *q << endl;
  cout << "number = " << number << endl;
  print(q, something);
  cout << "q = " << *q << endl;
  cout << "number = " << number << endl;

  return 0;
}

