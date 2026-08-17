#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Node of Huffman Tree
struct Node {
    char ch;
    int freq;
    Node *left, *right;

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
void Huffman(int n, int freq[]) {

    priority_queue<Node*, vector<Node*>, Compare> pq;

    // Create leaf nodes
    for (int i = 0; i < n; i++) {
        pq.push(new Node('A' + i, freq[i]));
    }

    // Build Huffman Tree
    while (pq.size() > 1) {

        Node* left = pq.top();
        pq.pop();

        Node* right = pq.top();
        pq.pop();

        // Create new internal node
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

    int freq[n];

    cout << "Enter frequencies of characters:\n";

    for (int i = 0; i < n; i++) {
        cout << char('A' + i) << " : ";
        cin >> freq[i];
    }

    Huffman(n, freq);

    return 0;
}