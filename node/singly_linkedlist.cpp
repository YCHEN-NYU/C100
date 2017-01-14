#include <iostream>
using namespace std;

struct node{
  int quantity;
  node *next;
};

void print_node(const node node_2B_printed){
  cout << "node.quantity = " << node_2B_printed.quantity << endl;
}


int main(){
  node *head_node = new node;
  node *first_node = new node;
  node *second_node = new node;

  cout << "head_node->quantity = ";
  cin >> head_node->quantity;
  head_node->next = first_node;

  cout << "first_node->quantity = ";
  cin >> first_node->quantity;
  first_node->next = second_node;

  cout << "second_node->quantity = ";
  cin >> second_node->quantity;
  second_node->next = NULL;

  delete head_node, first_node, second_node;
  return 0;
}
