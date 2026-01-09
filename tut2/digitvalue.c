#include <math.h>
#include <stdio.h> 


int digitValue1(int num, int k) {
    return num / (int)(pow(10, k - 1)) % 10;
}

void digitValue2(int num, int k, int *result) {
    *result = digitValue1(num, k);
}

int main() {
    int num, digit, result=-1;        
    printf("Enter the number: \n");    
    scanf("%d", &num);         
    printf("Enter k position: \n");    
    scanf("%d", &digit);       
    printf("digitValue1(): %d\n",  digitValue1(num, digit));    
    digitValue2(num, digit, &result);
    printf("digitValue2(): %d\n", result);       
    return 0; 
}