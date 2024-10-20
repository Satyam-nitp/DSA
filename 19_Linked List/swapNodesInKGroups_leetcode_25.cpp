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
        display();
    }

    void insertAtHead(int val){
        Node *temp=new Node(val);
        if(head==NULL){
            head=tail=temp;
            size++;
        }
        else{
            temp->next=head;
            head=temp;
            size++;
        }
        // display();
    }

    void insert(int index,int val){
        if(index<0 || index>size) {
            cout<<"Error index out of bound!!"<<endl;
            return;
        }
        Node *temp=new Node(val);
        if(index==0){
            insertAtHead(val);
            return;
        }
        else if(index==size){
            tail->next=temp;
            tail=temp;
            size++;
        }
        else{
            Node *t=head;
            Node *r=head->next;
            int c=1;
            while(r!=NULL){
                if(c==index) break;
                t=t->next;
                r=r->next;
                c++;
            }
            t->next=temp;
            temp->next=r;
            size++;
        }
        // display();
    }

};

Node *reverse(Node *head){
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

// int size(Node *head){
//     int c=0;
//     Node *temp=head;
//     while(temp){
//         c++;
//         temp=temp->next;
//     }
//     return c;
// }

void display(Node *head){
    Node *t=head;
    while(t){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<"NULL"<<endl;
}

void reverse_between(Node *head, int f, int l){
    Node *a=head;
    Node *b=head;
    for(int i=1;i<f;i++) b=b->next;
    Node *c=head;
    for(int i=1;i<l;i++) c=c->next;
    while(a->next!=b) a=a->next;
    a->next=NULL;
    Node *d=c->next;
    c->next=NULL;
    b=reverse(b);
    Node *temp=b;
    while(temp->next!=NULL) temp=temp->next;
    a->next=b;
    temp->next=d;

    return;
}

int main(){
    LinkedList *l = new LinkedList();
    int a=1,k=3;
    for(int i=0;i<10;i++){
        l->insert(l->size,a);
        a+=1;
    }
    display(l->head);
    Node *dummy=new Node(0);
    Node *d=dummy;
    d->next=l->head;
    while(d && d->next){
        int remLen=0;
        Node *t=d->next;
        while(t){
            remLen++;
            t=t->next;
        }
        if(remLen<k) break;
        reverse_between(d,2,k+1);
        display(dummy->next);
        for(int i=1;i<=k && d;i++) d=d->next;
    }
    return 0;
}