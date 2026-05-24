#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val): data(val), left(nullptr), right(nullptr)
    {};
};

class Solution{
     
    public:
    vector<int> InOrderTraversal(Node* root){
    stack<Node*> st;
    vector<int> inorder;
    Node* node = root;

    while(true){
        if(node != NULL ){
            st.push(node);
            node = node ->left;
        }
        else{
            if(st.empty () == true ) break;
            node = st.top();
            st.pop();
            inorder.push_back(node -> data);
            node = node-> right;
        }
    }    
    return inorder;
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

    vector<int> result = sol.InOrderTraversal(root);

    cout << "InOrder Traversal: ";

    for (int val : result) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
};
