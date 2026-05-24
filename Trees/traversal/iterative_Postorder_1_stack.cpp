#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val): data(val), left(nullptr), right(nullptr)
    {};
};
vector<int> postOrder(Node* root) {
    vector<int> post;
    stack<Node*> st;
    Node* cur = root;
    Node* temp;

    while (cur != NULL || !st.empty()) {

        if (cur != NULL) {
            st.push(cur);
            cur = cur->left;
        }
        else {

            temp = st.top()->right;

            if (temp == NULL) {
                temp = st.top();
                st.pop();
                post.push_back(temp->data);

                while (!st.empty() && temp == st.top()->right) {
                    temp = st.top();
                    st.pop();
                    post.push_back(temp->data);
                }
            }
            else {
                cur = temp;
            }
        }
    }

    return post;
};

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> ans = postOrder(root);

    cout << "Postorder Traversal: ";
    for (int x : ans)
        cout << x << " ";

    return 0;
}