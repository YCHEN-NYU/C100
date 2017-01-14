#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vect;
  for(int i = 0; i < 10; ++i)
  {
    vect.push_back(i);
  }

  for(auto it = vect.begin(); it < vect.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
