#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
// TO-DO: Implement the AddSales() function here
void AddSales(vector<int>& dailySales, const int sales[], int size) {
    for (int i = 0; i < size; i++) {
        dailySales.push_back(sales[i]);
    }
}
// TO-DO: Implement the PrintSales() function here, with each value separated by an empty space
void PrintSales(const vector<int>& dailySales) {
    for (int sale : dailySales) {
        cout << sale << " ";
    }
    cout << endl;
}
// TO-DO: Implement the CalAverage() function here
double CalAverage(const vector<int>& dailySales) {
    int sum = 0;
    for (int sale : dailySales) {
        sum += sale;
    }
    return sum / dailySales.size();
}
// TO-DO: Implement the SortSales() function here
void SortSales(vector<int>& dailySales) {
    sort(dailySales.begin(), dailySales.end());
}
int main() {
 vector<int> dailySales;
 int arr[] = {120, 80, 150, 90, 200};
 int size = sizeof(arr) / sizeof(arr[0]);
 AddSales(dailySales, arr, size);
 cout << "Before sorting:" << endl;
 PrintSales(dailySales);
 SortSales(dailySales);
 cout << "After sorting:" << endl;
 PrintSales(dailySales);
 cout << "Average sales: " << CalAverage(dailySales) << endl;
 return 0;
}