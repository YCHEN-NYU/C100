#include <iostream>
#include "author.h"
using namespace std;

int main(){
  Author classic_author("Bob", "bobemail@gmail.com", 'M');
  classic_author.show_author_info();
  classic_author.set_name("Mary");
  classic_author.set_email("mary@gmail.com");
  classic_author.set_gender('F');
  classic_author.show_author_info();

  return 0;
}
