#include<iostream>
using namespace std;

void Knapsack(int W, int wt[], int val[], int n) {
    int w;
    int K[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    cout << "Maximum value in Knapsack = " << K[n][W] << endl;
}

int main() {
    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    int val[n], wt[n];

    cout << "Enter values of items: ";
    for (int i = 0; i < n; i++)
        cin >> val[i];

    cout << "Enter weights of items: ";
    for (int i = 0; i < n; i++)
        cin >> wt[i];

    cout << "Enter maximum weight capacity of knapsack: ";
    cin >> W;

    Knapsack(W, wt, val, n);

    return 0;
}