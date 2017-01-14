#include <iostream>
using namespace std;

template <typename T>
class Number{
 private:
  T value;
 public:
  Number(T value) { this->value = value;}
  T get_value() const { return value;}
  void set_value(T value) { this->value = value;}
};

int main{
  Number<int> i(55);
  cout << i.get_value() << endl;

  Number<double> d(55.86);
  cout << d.get_value() << endl;

  Number<char> c('a');
  cout << c.get_value() << endl;

  Number<string> s("Hello");
  cout << s.get_value() << endl;

  return 0;
}


