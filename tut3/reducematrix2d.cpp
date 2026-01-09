#include <cstdio>
#define SIZE 4

using namespace std;

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize) {
    for (int j = 0; j < colSize; j++) {
        int sum = 0;
        for (int i = j; i < rowSize; i++) {
            sum += ar[i][j];
            ar[i][j] = 0;
        }
        ar[j][j] = sum;
    }
}

void print2D(int ar[][SIZE], int rowSize, int colSize) {
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int ar[SIZE][SIZE] = {
        {4, 3, 8, 6},
        {9, 0, 6, 5},
        {5, 1, 2, 4},
        {9, 8, 3, 7}
    };
    printf("Original Matrix:\n");    
    print2D(ar, SIZE, SIZE);
    reduceMatrix2D(ar, SIZE, SIZE);
    printf("\nReduced Matrix:\n");
    print2D(ar, SIZE, SIZE);
    return 0;
}