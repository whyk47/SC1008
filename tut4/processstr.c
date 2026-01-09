#include <stdio.h>
#include <string.h> 



void processString(char *str, int *totVowels, int *totDigits) {
    char digits[] = "1234567890";
    char vowels[] = "aeiouAEIOU";
    *totVowels = *totDigits = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (strchr(digits, c) != NULL) {
            (*totDigits)++;
        } else if (strchr(vowels, c) != NULL) {
            (*totVowels)++;
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