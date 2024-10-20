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
    }

};

Node* reverse(Node *head){
    Node *prev=NULL;
    Node *curr=head;
    Node *n=head->next;
    while(n){
        curr->next=prev;
        prev=curr;
        curr=n;
        n=n->next;
    }
    curr->next=prev;
    head=curr;
    return head;
}

void display(Node *head){
    Node *temp=head;
    while(temp){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}

int main(){
    LinkedList *l1 = new LinkedList();
    l1->insertAtTail(2);
    l1->insertAtTail(4);
    l1->insertAtTail(3);
    LinkedList *l2 = new LinkedList();
    l2->insertAtTail(5);
    l2->insertAtTail(6);
    l2->insertAtTail(4);
    display(l1->head);
    display(l2->head);
    Node *r1=reverse(l1->head);
    Node *r2=reverse(l2->head);
    display(r1);
    display(r2);
    int s=0,c=0;
    Node *ans=new Node(0);
    Node *a=ans;
    while(r1 || r2){
        s=(r1->val+r2->val+c);
        if(s>=10){
            s%=10;
            c=1;
        }
        Node *t=new Node(s);
        a->next=t;
        a=a->next;
        if(r1->next) r1=r1->next;
        if(l2->next) r2=r2->next;
    }
    return 0;
}