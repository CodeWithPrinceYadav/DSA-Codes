#include<bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    node* next;
    node* back;

    node(int data1, node* next1 , node* back1){
        this->data = data1;
        this->next = next1;
        this->back = back1;
    }
    node(int data1){
        this->data = data1;
        this->next = nullptr;
        this->back = nullptr;
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

//print function
void print(node* head){
    while (head != NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
}

node* reverseLL(node* head){
    if (head == nullptr || head -> next == NULL){
        return head;
    }
    node* current = head;
    node* temp = nullptr;
    while(current != nullptr){
        temp = current->back;
        current->back = current->next;
        current->next = temp;
        current = current->back;
    }
    if(temp != nullptr)
        head = temp->back;
    return head;
}

int main(){
    vector<int>arr = {10,20,30,40,50};
    node* head = convertArr2DLL(arr);
    head = reverseLL(head);
    print(head);
    return 0;
}