#include <cstdio> 
#define SIZE 20 
int rCountArray(int array[], int n, int a) {
    if (n <= 0) {
        return 0;
    } else {
        return rCountArray(array, n - 1, a) + (array[n - 1] == a ? 1 : 0);
    }

}
int main() {    
    // int array[SIZE];      
    // int index, count, target, size;         
    // printf("Enter array size: \n");    
    // scanf("%d", &size);    
    // printf("Enter %d numbers: \n", size);    
    // for (index = 0; index < size; index++)       
    //     scanf("%d", &array[index]);    
    // printf("Enter the target number: \n");    
    // scanf("%d", &target);    
    int array[] = {1, 2, 3, 4, 5, 1, 2, 1, 3, 4, 1};
    int target = 1;
    int count = rCountArray(array, 11, target);    
    printf("rCountArray(): %d\n", count);    
    return 0; 
}