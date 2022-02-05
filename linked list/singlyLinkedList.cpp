#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data=data;
        this -> next =NULL;
    }
    //destructor
    ~Node(){
        int value=this-> data;
        if(this ->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }

};
void InsertATHead(Node* &head,int d){
    //new node create
    Node* temp=new Node(d);
    temp-> next =head;
    head=temp;
}
void InsertAtTail(Node* &tail,int d){
    //new node create
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp-> data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void InsertAtPosition(Node* &tail,Node* &head,int position,int d){
    //first m insert karwane k liye
    if(position==1){
        InsertATHead(head,d);
        return ;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next==NULL){
    InsertAtTail(tail,d);
    return;}
    //creatinf a node for d
    Node* nodeTOInsert=new Node(d);
    nodeTOInsert->next=temp-> next;
    temp->next=nodeTOInsert;

}
void deletion(int position,Node* &head){
    //deleting first 
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memeory free kardo ab
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while (cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr-> next=NULL;
        delete curr;
    }
}
int main(){
    //creates a new node 
    Node* node1=new Node(10);//heap se lega ye
    cout<< node1-> data<<endl;
    cout<<node1->next<<endl;
    //head pointted to node 1
    Node* head =node1;
    Node* tail=node1;
    print(head);
    InsertAtTail(tail,12);
    print(head);
    InsertAtTail(tail,15);
    print(head);
    InsertAtPosition(tail,head,3,22);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    deletion(1,head);
    print(head);
return 0;
}