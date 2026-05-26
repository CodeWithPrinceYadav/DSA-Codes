#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val): data(val), left(nullptr), right(nullptr)
    {}
};

class Solution {
public:
    int balancedTree(Node* root){
        if (root == NULL) return 0;

        int lh = balancedTree(root->left);
        int rh = balancedTree(root->right);

        // If any subtree is already unbalanced
        if(lh == -1 || rh == -1) return -1;

        // Check current node balance
        if(abs(lh - rh) > 1) return -1;

        // Return height
        return 1 + max(lh, rh);
    }

    bool isBalanced(Node* root){
        return balancedTree(root) != -1;
    }
};

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(7);

    root->left->left = new Node(3);
    root->left->right = new Node(4);

    root->left->right->left = new Node(5);
    root->left->right->right = new Node(6);

    Solution sol;

    bool result = sol.isBalanced(root);

    cout << "Is Balanced Tree: " << result;

    return 0;
}