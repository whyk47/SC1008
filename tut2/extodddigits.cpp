#include <cstdio>
#include <cmath>
#define INIT_VALUE 999

using namespace std;

int extOddDigits1(int num) {
    int res = -1;
    int pow_10 = static_cast<int>(log10(num));
    for (int i = pow_10; i >= 0; i--) {
        int digit = num / static_cast<int>(pow(10, i)) % 10;
        if (digit % 2 != 0) {
            if (res < 0) {
                res = digit;
            } else {
                res = res * 10 + digit;
            }
        }
    }
    return res;
}

void extOddDigits2(int num, int *result) {
    *result = extOddDigits1(num);
}

int main() {    
    int number, result = INIT_VALUE;        
    printf("Enter a number: \n");    
    scanf("%d", &number);    
    printf("extOddDigits1(): %d\n", extOddDigits1(number));            
    extOddDigits2(number, &result);    
    printf("extOddDigits2(): %d\n", result);    
    return 0; 
}