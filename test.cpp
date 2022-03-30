#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;

    // constructor
    node(int val){
        data = val;
        next = NULL;
    }
};

    void insertAtTail(node* &head, int val){

    if(head==NULL){
        insertAtHead(head, val);
        return;
    }

    node* n = new node(val);

    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next=n;
    n->next = head;
}

void pairSum(node* &head)
{
    node* temp1 = head;
    node* temp2 = head;

    while(temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    
}
   

int main(){

    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 1);

    
    return 0;
}