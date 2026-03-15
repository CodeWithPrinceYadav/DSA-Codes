// traversal in linkedlist  
#include <bits/stdc++.h>
#include <string>
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

node* convert2ll(vector<int>arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i=1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover= temp;
    }
    return head;
};


void print(node* head){
    while (head != NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
}

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

node* findkthNode(node* temp, int k){
    k -= 1;

    while(temp != NULL && k > 0){
        k--;
        temp = temp->next;
    }
    return temp;
}

node* rotate(node* head, int k){
    int len = 1;
    node* tail = head;
    while(tail->next != NULL){
        len++;
        tail = tail->next;
    }
    if (k%len == 0 ) return head;
    k= k%len;
    tail->next = head;
    node* newLastNode = findkthNode(head, len-k);
    node* newHead = newLastNode->next;
    newLastNode -> next = NULL;

    return newHead;
}

int main(){
    vector<int>arr ={1,2,3,4,5,6,7,8,9,10};
    int k;
    cout<<"Enter kth value: ";
    cin>>k;
    node* head = convert2ll(arr);
    node* temp = head;

    node* newHead = rotate(head,k);
    print(newHead);
};