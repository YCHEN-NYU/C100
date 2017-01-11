#include <iostream>
#include "author.h"
using namespace std;

Author::Author(string name, string email, char gender){
  this->name = name;
  this->email = email;
  this->gender = gender;
}

void Author::set_name(string name){
  this->name = name;
}

void Author::set_email(string email){
  this->email = email;
}

void Author::set_gender(char gender){
  this->gender = gender;
}

string Author::get_name() const{
  return name;
}

string Author::get_email() const{
  return email;
}

char Author::get_gender() const{
  return gender;
}

void Author::show_author_info() const{
  cout << "Name: " << Author::get_name() << endl;
  cout << "Email: " << Author::get_email() << endl;
  cout << "Gender: " << Author::get_gender() << endl;
}

