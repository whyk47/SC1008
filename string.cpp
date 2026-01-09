#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    for (int i=0; i < input.length(); i++) {
        cout << input[i] << endl;
    }
    return 0;
}