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

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=NULL;
        tail=NULL;
        size=0;
    }

    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void insertAtTail(int val){
        Node *temp=new Node(val);
        if(tail==NULL){
            head=tail=temp;
            size++;
        }
        else{
            tail->next=temp;
            tail=temp;
            size++;
        }
        // display();
    }    
};

void display(Node *head){
    Node *t=head;
    while(t){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<"NULL"<<endl;
}

// Node *reverse(Node *head){
//     Node *prev=NULL;
//     Node *curr=head;
//     Node *n=head->next;
//     while(n){
//         curr->next=prev;
//         prev=curr;
//         curr=n;
//         n=n->next;
//     }
//     curr->next=prev;
//     head=curr;
//     return head;
// }

// int size(Node *head){
//     int c=0;
//     Node *temp=head;
//     while(temp){
//         c++;
//         temp=temp->next;
//     }
//     return c;
// }

// void reverse_between(Node *head, int f, int l){
//     if(f==1 && l==size(head)){
//         head=reverse(head);
//         display(head);
//         return;
//     }
//     Node *a=head;
//     Node *b=head;
//     for(int i=1;i<f;i++) b=b->next;
//     Node *c=head;
//     for(int i=1;i<l;i++) c=c->next;
//     while(a->next!=b) a=a->next;
//     a->next=NULL;
//     Node *d=c->next;
//     c->next=NULL;
//     b=reverse(b);
//     Node *temp=b;
//     while(temp->next!=NULL) temp=temp->next;
//     a->next=b;
//     temp->next=d;
//     head=a;
//     // display(head);
//     return;
// }

int main(){
    LinkedList *l = new LinkedList();
    l->insertAtTail(1);
    l->insertAtTail(2); 
    l->insertAtTail(3); 
    l->insertAtTail(4);
    l->insertAtTail(5);
    l->insertAtTail(6);
    l->insertAtTail(7);
    l->display();
    Node *deep=new Node(0);
    Node *d=deep,*temp=l->head;
    while(temp){
        Node *n=new Node(temp->val);
        d->next=n;
        d=d->next;
        temp=temp->next;
    }
    display(deep->next);
    return 0;
}