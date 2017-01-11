#ifndef AUTHOR_H
#define AUTHOR_H
#include <string>
using namespace std;
class Author{
 private:
  string name;
  string email;
  char gender;
 public:
  Author(string name, string email, char gender);
  void set_name(string name);
  void set_email(string email);
  void set_gender(char gender);

  string get_name() const;
  string get_email() const;
  char get_gender() const;
  void show_author_info() const;
};

#endif
