#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    return root;
}

void inorderTraversal(Node* root) {
    if (root == nullptr) 
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node* root) {
    if (root == nullptr) 
        return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node* root) {
    if (root == nullptr) 
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = nullptr;
    
    cout << "\nMembuat BST dengan 11 simpul\n";
    int values[] = {50, 30, 70, 20, 40, 60, 80, 10, 25, 65, 90};
    
    for (int i = 0; i < 11; i++) {
        root = insert(root, values[i]);
    }

    cout << "Simpul yang dimasukkan: 50, 30, 70, 20, 40, 60, 80, 10, 25, 65, 90\n";

    cout << "\n--- Hasil Penelusuran (Traversal) ---";
    cout << "\nPre-Order  : ";
    preorderTraversal(root);
    
    cout << "\nIn-Order   : ";
    inorderTraversal(root);
    
    cout << "\nPost-Order : ";
    postorderTraversal(root);
    cout << "\n-------------------------------------\n";

    return 0;
}