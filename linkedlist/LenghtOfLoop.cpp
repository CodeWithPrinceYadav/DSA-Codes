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

// find length of cycle
int findlength(node* slow, node* fast){
    int cut = 1;
    fast = fast->next;
    while(slow!=fast){
        cut++;
        fast = fast->next;
    }
    return cut;
}

// detect cycle and return its length
int Length(node* head){
    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) 
            return findlength(slow,fast);
    }
    return 0;
};

int main(){
    vector<int>arr = {10,20,30,40,50,60};
    
    node* head =  convert2ll(arr);
    head->next->next->next->next->next->next = head->next->next;

    int len =  Length(head);
    cout<< "Length of loop: "<< len << endl;
    return 0;
}