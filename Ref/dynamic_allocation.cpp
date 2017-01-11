#include <iostream>
using namespace std;

int *quantity;
double *price; 

void allocate_stock(){
  quantity = new int;
  *quantity = 10;
  price = new double(9.99);
}

int main(){
  allocate_stock();
  cout << "quantity = " << quantity << endl;
  cout << "*quantity = " << *quantity << endl;
  cout << "price = " << price << endl;
  cout << "*price = " << *price << endl;
  
  delete quantity;
  delete price;
  return 0;

}
