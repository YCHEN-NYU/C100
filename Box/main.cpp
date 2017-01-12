#include <iostream>
#include "Box.h"
using namespace std;

int main()
{
    Box small_box(1.0, 1.0, 1.0);
    small_box.print();
    Box medium_box(2.0, 2.0, 2.0);
    medium_box.print();
    Box big_box = small_box + medium_box;
    big_box.print();

    return 0;
}
