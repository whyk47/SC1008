#include <cstdio>
#include <string> 
#include <cctype>   
#include <cstring>  

using namespace std;

void processString(char *str, int *totVowels, int *totDigits) {
    *totVowels = *totDigits = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (isdigit(c)) {
            (*totDigits)++;
        } else {
            for (char vowel : "aeiou") {
                if (tolower(c) == vowel) {
                    (*totVowels)++;
                    break;
                }
            }
        }
    }
}

int main() {    
    char str[50], *p;    
    int totVowels, totDigits; 
    printf("Enter the string: \n");    
    fgets(str, 50, stdin);    
    if (p=strchr(str,'\n')) *p = '\0';  
    processString(str, &totVowels, &totDigits);       
    printf("Total vowels = %d\n", totVowels);    
    printf("Total digits = %d\n", totDigits);    
    return 0; 
}