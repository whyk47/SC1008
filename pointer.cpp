#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello, World!";
    // reference
    string &ref = str;
    // pointer
    string* ptr = &str;
    cout << "String: " << str << endl;
    cout << "Address: " << &str << endl;
    cout << "Reference: " << ref << endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Dereferenced Pointer: " << *ptr << endl;

    // Change value using reference
    ref = "Hello, C++!";
    cout << "String after reference change: " << str << endl;
    // Change value using pointer
    *ptr = "Hello, Pointers!";
    cout << "String after pointer change: " << str << endl;

    return 0;
}