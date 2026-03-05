#include<bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    node* next;

    node(int data1, node* next1){
        this->data = data1;
        this->next = next1;
    }
    node(int data1){
        this->data = data1;
        this->next = nullptr;
    }
};

node* convertArr2LL(vector<int>arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i=1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover= temp;
    }
    return head;
};

//reverse ll recursion method
node* reverseLL(node* head){
    if (head == NULL || head-> next == NULL){
        return head;
    }

    node* newHead = reverseLL(head->next);
    node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

//print function
void print(node* head){
    while (head != NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
}


int main(){
    vector<int>arr = {10,20,30,40,50};
    node* head = convertArr2LL(arr);
    head = reverseLL(head);
    print(head);
    return 0;
}