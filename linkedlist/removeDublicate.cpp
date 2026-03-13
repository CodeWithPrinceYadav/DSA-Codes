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

//print function
void print(node* head){
    while (head != NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
}

//delete dublicate in 2D ll
node* removeDublicate(node* head){
    node* temp = head;
    while (temp!= NULL && temp->next != NULL){
        node* nextNode = temp->next;
        while (nextNode != NULL && nextNode->data == temp->data){
            nextNode = nextNode->next;
        }
        temp->next = nextNode;
        if (nextNode) nextNode->back = temp;
        temp = temp ->next;
    }
    return head;
}


int main(){

    vector<int> arr = { 1,2,3,3,4,5,5 };
    node* head = convertArr2DLL(arr);

    node* ans = removeDublicate(head);
    print(head);
    return 0;
}