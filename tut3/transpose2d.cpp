#include <cstdio>
#define SIZE 4

using namespace std;

void transpose2D(int ar[][SIZE], int rowSize, int colSize) {
    for (int i = 0; i < rowSize; i++) {
        for (int j = i + 1; j < colSize; j++) {
            int temp = ar[i][j];
            ar[i][j] = ar[j][i];
            ar[j][i] = temp;
        }
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
    int array[SIZE][SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Original Array:\n");
    print2D(array, SIZE, SIZE);
    transpose2D(array, SIZE, SIZE);
    printf("\nTransposed Array:\n");
    print2D(array, SIZE, SIZE);
    return 0;
}