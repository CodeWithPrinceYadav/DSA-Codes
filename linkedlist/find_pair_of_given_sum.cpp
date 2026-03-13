// doubly linkedList 
#include <bits/stdc++.h>
using namespace std;

//doubly linked list initialize
struct node{
    public:
    int data;
    node* next;
    node* back;
    
    node(int data1, node* next1, node* back1){
        this ->data = data1;
        this ->next = next1;
        this ->back = back1;
    }
    node(int data1){
        this ->data = data1;
        this ->next = nullptr;
        this ->back = nullptr;
    }
};

//convert array to doubly Linked List
node* convertArr2DLL(vector<int> arr){
    node* head = new node (arr[0]);
    node* prev = head;
    for (int i=1; i<arr.size(); i++){
        node* temp = new node (arr[i]);
        prev->next = temp;
        temp->back = prev; 
        prev=temp;
    }
    return head;
}
//find tail element
node* findTail(node* head){
    node* tail = head;
    while(tail->next != NULL) tail = tail->next;
    return tail;
}
//print function
void print(node* head){
    while (head != NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
}

//delete
vector<pair<int, int>> findPair(node* head, int k){
    vector<pair<int,int>> ans;
    if(head == NULL ) return ans;

    node* left = head;
    node* right = findTail(head);

    while(left != right && right->next != left){
        if(left->data + right ->data == k){
            ans.push_back({left->data , right->data});
            left = left->next;
            right = right ->back;
        }
        else if (left->data + right->data < k) left = left->next;
        else right = right ->back;
    }
    return ans;
}


int main(){

    vector<int> arr = { 1,2,3,4,5 };

    node* head = convertArr2DLL(arr);

    int k;
    cout<<"Enter k: ";
    cin>>k;

    vector<pair<int,int>> ans = findPair(head,k);

    for(auto it : ans){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}