#include <cstdio> 
#include <cstring>
#include <cctype> 
using namespace std;

char *stringncpy(char *s1, char *s2, int n) {
    strncpy(s1, s2, n);
    // bool nullFound = false;
    // for (int i = 0; i < n; i++) {
    //     if (s2[i] == '\0' || nullFound) {
    //         nullFound = true;
    //         s1[i] = '\0';
    //     } else {
    //         s1[i] = s2[i];
    //     }
    // }
    return s1;
}
int main() {    
    char targetStr[40], sourceStr[40], *target, *p;    
    int length;           
    printf("Enter the string: \n");    
    fgets(sourceStr, 40, stdin);    
    if (p=strchr(sourceStr,'\n')) *p = '\0';     
    printf("Enter the number of characters: \n");    
    scanf("%d", &length);       
    target = stringncpy(targetStr, sourceStr, length);    
    printf("stringncpy(): %s\n", target);    
    return 0; 
} 