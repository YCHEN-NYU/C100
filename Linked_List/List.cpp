#include <iostream>
#include "List.h"
using namespace std;

List::List() {
    head = new node;
    head->song = "head (no song info.)";
    head->artist = "head (no artist info.)";
    head->next = NULL;
}

void List::append_node(string song, string artist) {
    node *current_node = head;
    while(current_node->next != NULL) 
        current_node = current_node->next;
    
    node *new_node = new node;
    new_node->song = song;
    new_node->artist = artist;
    new_node->next = NULL;

    current_node->next = new_node;
}

void print_all() const {
    node *current_node = head;
    while(current_node->next != NULL) {
        cout << current_node->song << " | " << current_node->artist << endl;
    }
}
