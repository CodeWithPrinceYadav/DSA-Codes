#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

    node(int data1){
        data = data1;
        next = nullptr;
    }
};

node* convertArr2LL(vector<int> arr){
    node* head = new node(arr[0]);
    node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

node* addTwoLL(node* head1 , node* head2){

    node* dummy = new node(-1);
    node* curr = dummy;

    int carry = 0;

    while(head1 != NULL || head2 != NULL || carry){

        int sum = carry;

        if(head1){
            sum += head1->data;
            head1 = head1->next;
        }

        if(head2){
            sum += head2->data;
            head2 = head2->next;
        }

        carry = sum / 10;

        node* temp = new node(sum % 10);
        curr->next = temp;
        curr = curr->next;
    }

    return dummy->next;
}

// print function
void print(node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){

    vector<int> arr1 = {2,4,3};
    vector<int> arr2 = {5,6,7,9};

    node* head1 = convertArr2LL(arr1);
    node* head2 = convertArr2LL(arr2);

    node* result = addTwoLL(head1, head2);

    print(result);

    return 0;
}