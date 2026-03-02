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

//delection head
node* deleteHead(node* head){
    if (head == NULL || head-> next == NULL){
        return NULL;
    }
    node* prev = head;
    head = head-> next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

//deletion of tail
node* deleteTail(node* head){
    if (head == NULL || head-> next == NULL){
        return NULL;
    }
    
    node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

//remove k th element 
node* remove_kth_element(node* head, int k){
    if(head == NULL) return NULL;
    int cnt=0;
    node* Knode = head;
    while(Knode!=NULL){
        cnt++;
        if(cnt == k) break;
        Knode = Knode->next;
    }
    node* prev = Knode->back;
    node* front = Knode->next;
    //then apply 4 four condition

    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if (prev == NULL){
        return deleteHead(head);
    }
    else if (front == NULL){
        return deleteTail(head);
    }
    prev ->next = front;
    front->back = prev;

    Knode->next = nullptr;
    Knode->back = nullptr;
    delete Knode;
    return head;
}


int main(){
    vector<int>arr = {12,5,8,7};
    node* head = convertArr2DLL(arr);
    head = remove_kth_element(head,3);
    print(head);
    return 0;
}