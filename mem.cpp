#include <iostream>
#include <string>

using namespace std;

int main() {
    // pointer to allocated memory space
    string* ptr = new string;
    *ptr = "Hello, World!";
    cout << *ptr << endl;
    // deallocate memory space
    delete ptr;
    return 0;
}