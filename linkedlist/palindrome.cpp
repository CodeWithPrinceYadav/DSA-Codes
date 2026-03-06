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
//palindrome or not
bool isPalindrome(node* head){
    if(head == NULL || head->next == NULL){
        return true;
    }
    node* slow = head;
    node* fast = head;
    while (fast->next !=NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    node* newHead = reverseLL(slow->next);
    node* first = head;
    node* second = newHead;
    while(second != NULL){
        if(first->data != second->data){
            return false;
        }
        first = first->next;
        second = second->next;
    }
    reverseLL(newHead);
    return true;
}

int main(){

    vector<int> arr = {1,2,3,3,2,1};

    node* head = convert2ll(arr);

    if(isPalindrome(head)){
        cout<<"It is Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

    return 0;
}