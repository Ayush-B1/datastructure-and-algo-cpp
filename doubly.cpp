#include<iostream>


using namespace std;


//Creating a Node
class Node{
public:
int data;
Node* prev;
Node* Next;


//constructor
Node(int val){
this->data = val;
this->prev = NULL;
this->Next = NULL;
}
};




//insert At head
void insert_head(Node* &tail, Node* &head, int d){


//empty list;
if(head == NULL){
Node* temp = new Node(d);
head = temp;
tail = temp;
}else{
Node* temp = new Node(d);
temp->Next = head;
head->prev = temp;
head = temp;
}
}




//Insert at Tail
void insert_tail(Node* &tail, Node* &head, int d){


if(tail == NULL){
Node* temp = new Node(d);
tail = temp;
head = temp;
}else{
Node* temp = new Node(d);
tail->Next = temp;
temp->prev = tail;
tail = temp;
}
}


//insert at any position
void insert_pos(Node* &tail ,Node* &head, int position, int d){


//inserts at head;
if(position == 1){
insert_head(tail, head, d);
return;
}


int cnt = 1;
Node* temp = head;


//inserts at any middle node;
while(cnt<position-1){
temp = temp->Next;
cnt++;
}


//inserts at tail
if(temp->Next == NULL){
insert_tail(tail, head, d);
return;
}


Node* nodepos = new Node(d);


nodepos->Next = temp->Next;
temp->Next->prev = nodepos;
temp->Next = nodepos;
nodepos->prev = temp;


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
Node* tail = NULL;


insert_tail(tail, head, 12);


insert_tail(tail, head, 15);

insert_pos(tail, head, 3, 7);


insert_pos(tail, head, 1, 19);


insert_pos(tail, head, 4, 9);

insert_pos(tail, head, 6, 14);
print(head);


cout<<"head: "<<head->data<<endl;
cout<<"tail: "<<tail->data<<endl;
}
