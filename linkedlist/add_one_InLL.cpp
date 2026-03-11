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

//reverse ll Iterative method
node* reverseLL(node* head){
    node* temp = head;
    node* prev = NULL;
    while(temp != NULL){
        node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp=front;
    }
    return prev;
};

node* addOne(node* head){
    head = reverseLL(head);
    node * current = head;
    int carry = 1;

    while(current && carry){
        int sum = current -> data + carry;
        current ->data = sum % 10;
        carry = sum/10;

        if (!current -> next && carry){
            current -> next = new node (carry);
            carry = 0;
        }

        current = current -> next;
    }
    head = reverseLL (head);
    return head;
}

//print function
void print(node* head){
    while (head != NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
}


int main(){
    vector<int>arr = {7, 6, 9};
    node* head = convertArr2LL(arr);
    head = addOne(head);
    print(head);
    return 0;
}