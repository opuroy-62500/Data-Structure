#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    int rows = 3, cols = 4;
    int sum = 0, count = 0;

    // First row
    for (int j = 0; j < cols; j++) {
        sum += arr[0][j];
        count++;
    }

    // Last column (skip first row to avoid double-counting corner)
    for (int i = 1; i < rows; i++) {
        sum += arr[i][cols - 1];
        count++;
    }

    double average = (double)sum / count;

    cout << "Sum: "     << sum     << endl;
    cout << "Count: "   << count   << endl;
    cout << "Average: " << average << endl;

    return 0;
}