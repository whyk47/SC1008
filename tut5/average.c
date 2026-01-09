#include <stdio.h>
#include <string.h>
struct student{
    char name[20]; /* student name */
    double testScore; /* test score */
    double examScore; /* exam score */
    double total; /* total = (testScore+examScore)/2 */
};
double average();
int main()
{
printf("average(): %.2f\n", average());
return 0;
}
double average()
{
/* Write your code here */
    struct student db[20];
    int count = 0;
    while (count < 20) {
        char name[20];
        double test, exam, total;
        printf("Enter student name:\n");
        scanf("%s", name);
        if (strcmp(name, "END") == 0) {
            break;
        }
        strcpy(db[count].name, name);
        printf("Enter test score:\n");
        scanf("%lf", &test);
        db[count].testScore = test;
        printf("Enter exam score:\n");
        scanf("%lf", &exam);
        db[count].examScore = exam;
        total = test + exam;
        db[count].total = total;
        printf("Student %s total = %.2f\n", name, total);
        count++;
    }
    double sum;
    for (int i = 0; i < count; i++) {
        sum += db[i].total;
    }
    return sum / count;
}