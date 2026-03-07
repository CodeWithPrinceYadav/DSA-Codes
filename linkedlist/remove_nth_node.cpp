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

//remove nth node from ll
node* removenNth(node* head, int n ){
    node* slow= head;
    node* fast= head;
    for(int i = 1 ; i<=n ; i++){
        fast = fast ->next;
    }
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    node* delnode = slow->next;
    slow->next = slow->next->next;
    free(delnode);
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
    vector<int>arr = {10,20,30,40,50};
    node* head = convertArr2LL(arr);
    int n;
    cout<< "Enter nth node to remove: ";
    cin>>n;
    head = removenNth(head,n);
    print(head);
    return 0;
}