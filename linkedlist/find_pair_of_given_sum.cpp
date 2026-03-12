//find tail element
node* findTail(node* head){
    node* tail = head;
    while(tail->next != NULL) tail = tail->next;
    return tail;
}