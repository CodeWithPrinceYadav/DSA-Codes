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
 //conver array to ll
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

//print function
void print(node* head){
    while (head != NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
}

//delete middle element in LL
node* deleteMiddleElement(node* head){
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }
    node* slow = head;
    node* fast = head;
    fast = fast->next->next;
    while(fast!=NULL && fast -> next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    node* middleElement = slow->next;
    slow ->next = slow->next->next;
    delete middleElement;
    return head;
}
int main(){
    vector<int>arr = {10,20,30,40,50,60};
    node* head =  convert2ll(arr);

    cout << "Original Linked List: ";
    print(head);
    cout<<endl;
    
    node* middle = deleteMiddleElement(head);

    cout << "After Deleting Middle: ";
    print(middle);

    return 0;
}