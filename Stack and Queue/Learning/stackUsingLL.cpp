#include <bits/stdc++.h>
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

class st{
    node* top;
    int size ;
public:
    st(){
        top = nullptr;
        size = 0;
    }
    
    void push(int x){
        node* temp = new node(x);
        temp ->next = top;
        top = temp;
        size = size+1;
    }

    int peek(){
        if(top == nullptr){
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    void pop(){
        if(top == nullptr){
            cout << "Stack is empty\n";
            return;
        }
        node* temp = top;
        top = top->next;
        delete temp;
        size = size -1;
    }

    int getSize(){
        return size;
    }
};

int main(){
    st s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    cout << "Size: " << s.getSize() << endl;

    s.pop();
    cout << "Top after pop: " << s.peek() << endl;

    s.pop();
    s.pop();
    s.pop();  
    return 0;
}