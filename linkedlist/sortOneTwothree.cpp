#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }

    node(int data1) {
        data = data1;
        next = nullptr;
    }
};

class Solution {
public:
    node* sortZeroOneTwo(node* head){
        node* zeroDummy = new node (-1);
        node* oneDummy = new node (-1);
        node* twoDummy = new node (-1);
        
        node* zeroTail = zeroDummy;
        node* oneTail = oneDummy;
        node* twoTail = twoDummy;

        node* curr = head;
        while(curr){
            if(curr->data ==0){
                zeroTail->next = curr;
                zeroTail = zeroTail->next;
            }
            else if(curr->data == 1 ){
                oneTail->next = curr;
                oneTail = oneTail->next;
            }
            else {
                twoTail->next = curr;
                twoTail = twoTail->next;
            }
            curr = curr ->next;
        }
        //connect the three lists
        zeroTail->next = oneDummy->next ? oneDummy->next : twoDummy->next;
        oneTail->next = twoDummy->next;
        twoTail->next = nullptr;
        node* newHead = zeroDummy->next;

        delete zeroDummy;
        delete oneDummy;
        delete twoDummy;

        return newHead;
    }
};

void printLinkedList(node* head) {
    node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = new node(1);
    head->next = new node(0);
    head->next->next = new node(1);
    head->next->next->next = new node(2);
    head->next->next->next->next = new node(0);

    cout << "Original Linked List: ";
    printLinkedList(head);

    Solution obj;

    head = obj.sortZeroOneTwo(head);

    cout << "Sorted Linked List: ";
    printLinkedList(head);

    return 0;
}