#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void inserttotail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node* n1 = new node(5);
    node* tail = n1;
    node* head = n1;

    inserttotail(tail, 10);
    
    inserttotail(tail, 20);
        
    inserttotail(tail, 30);
    print(head);

    return 0;
}