#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;
struct node {
    string song, artist;
    node *next;
};

class List {
    private:
        node *head;
        int length_of_list;
    public:
        List();
        void append_node(string song, string artist);
        void print_all() const;
};
#endif
