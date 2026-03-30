#include <bits/stdc++.h>
using namespace std;

struct node {
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

struct sol {
public:
    node* start = nullptr;
    node* end = nullptr;
    int size = 0;

    void push(int x) {
        node* temp = new node(x);
        if (start == nullptr)
            start = end = temp;
        else {
            end->next = temp;
            end = temp;
        }
        size++;
    }

    void pop() {
        if (start == nullptr) {
            cout << "Queue Underflow\n";
            return;
        }
        node* temp = start;
        start = start->next;
        delete temp;
        size--;

        if (start == nullptr)
            end = nullptr;
    }

    int top() {
        if (start == nullptr) {
            cout << "Queue has no element\n";
            return -1;
        }
        return start->data;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return start == nullptr;
    }

    void display() {
        node* temp = start;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    sol q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue elements: ";
    q.display();

    cout << "Front element: " << q.top() << endl;
    cout << "Size: " << q.getSize() << endl;

    q.pop();
    cout << "After pop: ";
    q.display();

    cout << "Front element: " << q.top() << endl;
    cout << "Size: " << q.getSize() << endl;

    return 0;
}