#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Node of Huffman Tree
struct Node {
    char ch;
    int freq;
    Node* left;
    Node* right;

    Node(char c, int f) {
        ch = c;
        freq = f;
        left = right = NULL;
    }
};

// Compare nodes according to frequency
struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

// Generate Huffman Codes
void generateCodes(Node* root, string code) {

    if (root == NULL)
        return;

    // Leaf node
    if (root->left == NULL && root->right == NULL) {
        cout << root->ch << " : " << code << endl;
        return;
    }

    generateCodes(root->left, code + "0");
    generateCodes(root->right, code + "1");
}

// Huffman Encoding
void Huffman(int n, char chars[], int freq[]) {

    priority_queue<Node*, vector<Node*>, Compare> pq;

    // Create leaf nodes
    for (int i = 0; i < n; i++) {
        pq.push(new Node(chars[i], freq[i]));
    }

    // Build Huffman Tree
    while (pq.size() > 1) {

        Node* left = pq.top();
        pq.pop();

        Node* right = pq.top();
        pq.pop();

        // Create internal node
        Node* parent = new Node('\0', left->freq + right->freq);

        parent->left = left;
        parent->right = right;

        pq.push(parent);
    }

    // Root of Huffman Tree
    Node* root = pq.top();

    cout << "\nHuffman Codes:\n";
    cout << "-------------\n";

    generateCodes(root, "");
}

int main() {

    int n;

    cout << "Enter number of characters: ";
    cin >> n;

    char chars[n];
    int freq[n];

    cout << "\nEnter characters and their frequencies:\n";

    for (int i = 0; i < n; i++) {
        cout << "\nCharacter " << i + 1 << ": ";
        cin >> chars[i];

        cout << "Frequency of '" << chars[i] << "': ";
        cin >> freq[i];
    }

    Huffman(n, chars, freq);

    return 0;
}
