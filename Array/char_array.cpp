#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char char_array[] = "Hello";
    char *ptr_char_array = "gentle";

    size_char_array = sizeof(char_array)/sizeof(*char_array);
    for(const int *ptr_element = char_array; *ptr_element != '\0'; ++ptr_element)
    {
        cout << *ptr_element;
    }
    cout << endl;

    for(const int *ptr_element = ptr_char_array; *ptr_element != '\0'; ++ptr_element)
    {
        cout << *ptr_element;
    }
    cout << endl;
}

