#include<iostream>
using namespace std;

void printLCS(string X, string Y, int m, int n) {
    int L[m + 1][n + 1];

    // Build the LCS table
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    // Following code is used to print the LCS
    int index = L[m][n];
    char lcs[index + 1];
    lcs[index] = '\0'; // Set the terminating character

    // Start from the bottom right corner of the table
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs[index - 1] = X[i - 1]; // If characters match, add to result
            i--;
            j--;
            index--;
        } else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }

    cout << "Longest Common Subsequence: " << lcs << endl;
    cout << "Length of LCS: " << L[m][n] << endl;
}

int main() {
    string X, Y;
    cout << "Enter first string: ";
    cin >> X;
    cout << "Enter second string: ";
    cin >> Y;

    int m = X.length();
    int n = Y.length();

    printLCS(X, Y, m, n);

    return 0;
}
