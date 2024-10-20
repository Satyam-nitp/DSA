#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void rec_display(Node *head){
    if(head==NULL){
        cout<<"NULL"<<endl;
        return;
    }
    cout<<head->val<<"->";
    rec_display(head->next);
}

int size(Node *head){
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

void reverse_display(Node *head){
    if(head==NULL) return;
    reverse_display(head->next);
    cout<<head->val<<"->";
}

int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    Node *e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    cout<<size(a)<<endl;
    rec_display(a);
    reverse_display(a);
    cout<<"NULL"<<endl;
    return 0;
}