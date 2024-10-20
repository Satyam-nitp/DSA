#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node* child;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
        this->child=NULL;
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
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void displayrev(){
        Node *temp=tail;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->prev;
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
            temp->prev=tail;
            tail=temp;
            size++;
        }
        // display();
        // displayrev();
    }

    void insertAtHead(int val){
        Node *temp=new Node(val);
        if(head==NULL){
            head=tail=temp;
            size++;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
            size++;
        }
        // display();
        // displayrev();
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
            insertAtTail(val);
            return;
        }
        else{
            Node *t=head;
            int c=1;
            while(t!=NULL){
                if(c==index) break;
                t=t->next;
                c++;
            }
            temp->next=t->next;
            t->next->prev=temp;
            t->next=temp;
            temp->prev=t;
            size++;
        }
        // display();
        // displayrev();
    }

};

int main(){
    LinkedList *l1 = new LinkedList();
    int a=1;
    for(int i=0;i<6;i++){
        l1->insert(l1->size,a);
        a+=1;
    }
    LinkedList *l2 = new LinkedList();
    a=7;
    for(int i=0;i<4;i++){
        l2->insert(l2->size,a);
        a+=1;
    }
    LinkedList *l3 = new LinkedList();
    a=11;
    for(int i=0;i<2;i++){
        l3->insert(l3->size,a);
        a+=1;
    }
    Node *t1=l1->head;
    t1->next->next->child=l2->head;
    Node *t2=l2->head;
    t2->next->child=l3->head;
    l1->display();
    l2->display();
    l3->display();
    Node *temp=l1->head;
    while(temp){
        if(temp->child!=NULL){
            Node *a=temp->next;
            Node *c=temp->child;
            temp->child=NULL;
            c=flatten(c);
        }
    }
    return 0;
}