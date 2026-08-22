#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of jobs: ";
    cin >> n;

    char job[n];
    int deadline[n], profit[n];

    for (int i = 0; i < n; i++) {
        cout << "Job, Deadline, Profit: ";
        cin >> job[i] >> deadline[i] >> profit[i];
    }

    // Sort jobs by decreasing profit
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (profit[i] < profit[j]) {
                swap(profit[i], profit[j]);
                swap(deadline[i], deadline[j]);
                swap(job[i], job[j]);
            }

    int slot[n] = {};
    int maxProfit = 0;

    // Schedule jobs
    for (int i = 0; i < n; i++) {
        for (int j = deadline[i] - 1; j >= 0; j--) {
            if (slot[j] == 0) {
                slot[j] = job[i];
                maxProfit += profit[i];
                break;
            }
        }
    }

    cout << "\nJob Sequence: ";
    for (int i = 0; i < n; i++)
        if (slot[i] != 0)
            cout << char(slot[i]) << " ";

    cout << "\nMaximum Profit: " << maxProfit << endl;

    return 0;
}