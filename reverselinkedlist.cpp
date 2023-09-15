#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* Next;

    Node(int data){
        this->data = data;
        this->Next = NULL;
    }
};

void insertathead(Node* &head, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }else{
        Node* temp = new Node(d);
        temp->Next = head;
        head = temp;
    }
}


// Reversing a linked list iterative way
// Node* revese(Node* &head){
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* next;

//     while(curr!=NULL){
//         next=curr->Next;
//         curr->Next = prev;


//         prev = curr;
//         curr = next;
//     }

//     return prev;
// }


//Recursive Way

Node* recursiveReverse(Node* &head){

    if(head==NULL||head->Next == NULL){
        return head;
    }

    Node* newhead = recursiveReverse(head->Next);
    head->Next->Next = head;
    head->Next = NULL;

    return newhead;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }cout<<endl;
}

int main(){
    Node* head = NULL;

    insertathead(head, 12);

    insertathead(head, 15);

    insertathead(head, 13);

    insertathead(head, 10);
    cout<<"your Linked list is: ";
    print(head);
    cout<<endl;
    

    cout<<"The Linked List After Reversing: ";
    Node* newhead = recursiveReverse(head);
    print(newhead);
    cout<<endl;
}
