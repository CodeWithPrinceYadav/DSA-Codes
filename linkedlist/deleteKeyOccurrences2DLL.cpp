// doubly linkedList linkedlist  
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

//delete
node* deleteKeyOccurrences(node* head , int k){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == k){
            if(temp==head){
                head = temp->next;
            }
        node* nextNode = temp->next;
        node* prevNode = temp->back;

        if(nextNode !=NULL) nextNode ->back = prevNode;
        if(prevNode !=NULL) prevNode ->next = nextNode;

        free(temp);
        temp = nextNode;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}

int main(){
    vector<int>arr = {10,3,10,3,65,10,10};
    node* head = convertArr2DLL(arr);
    int k;
    cout<< "Enter k element: ";
    head = deleteKeyOccurrences(head,k);
    print(head);
    return 0;
}