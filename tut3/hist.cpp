#include <cstdio>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int count[10] = {0};
    for (int i = 0; i < 100; i++) {
        int num = rand() % 100;
        count[num / 10]++;
    }
    for (int i = 0; i < 10; i++) {
        stringstream ss;
        int start = i * 10, end = start + 9;
        ss << start << '-' << end;
        string head = ss.str();
        printf("%5s|", head.c_str());
        printf("%s\n", string(count[i], '*').c_str());
    }
    return 0;
}