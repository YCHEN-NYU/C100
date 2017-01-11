#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "author.h"
using namespace std;

class book{
 private:
  string title;
  author writer;
  double price;
  int quantity_in_stock;

 public:
  book(string title, author writer, double price, int quantity_in_stock = 0);
  string get_title() const;
  void set_title(string title);
  double get_price() const;
  void set_price(double price);
  int get_quantity_in_stock() const;
  void set_quantity_in_stock(int quantity_in_stock);
  void show_book_info() const;
  string get_author_name() const;
};

#endif
  


