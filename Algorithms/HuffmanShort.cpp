#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void huffman(int n, char ch[], int f[]) {
    priority_queue<pair<int, string>,
                   vector<pair<int, string>>,
                   greater<pair<int, string>>> pq;

    for (int i = 0; i < n; i++)
        pq.push({f[i], string(1, ch[i])});

    while (pq.size() > 1) {
        auto a = pq.top(); pq.pop();
        auto b = pq.top(); pq.pop();

        for (char c : a.second)
            cout << c << " : 0" << endl;

        for (char c : b.second)
            cout << c << " : 1" << endl;

        pq.push({a.first + b.first, a.second + b.second});
    }
}

int main() {
    int n;

    cout << "Enter number of characters: ";
    cin >> n;

    char ch[n];
    int f[n];

    cout << "Enter characters and their frequencies:\n";

    for (int i = 0; i < n; i++) {
        cout << "\nCharacter " << i + 1 << ": ";
        cin >> ch[i];

        cout << "Frequency of " << ch[i] << ": ";
        cin >> f[i];
    }

    huffman(n, ch, f);

    return 0;
}
