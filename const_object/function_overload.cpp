#include <iostream>
#include <string>
using namespace std;

int main(){
 const string test_string = "Apple";
 string another_test_string = "Banana";
  
 cout << test_string.at(3) << endl;
 another_test_string.at(2) = 'A';
 cout << another_test_string << endl;

 //test_string.at(1) = 'K'; cause error: assignment of read-only location
 //'test_string.std::__cxx11::basic_string<_CharT, _Traits, _Alloc>::at<char,
 //std::char::allocator<char> > (1ul)
 return 0;
}
