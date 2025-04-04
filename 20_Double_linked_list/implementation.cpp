#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
        display();
        displayrev();
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
        display();
        displayrev();
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
        display();
        displayrev();
    }

    void deleteAtEnd(){
        Node *temp=head;
        if(size==0){
            display();
            return;
        }
        else if(size==1){
            head=tail=NULL;
            size--;
        }
        else{
            tail=tail->prev;
            tail->next=NULL;
            size--;
        }
        display();
        displayrev();
    }

    void deleteAtHead(){
        if(size==0){
            display();
            return;
        }
        else if(size==1){
            head=tail=NULL;
            size--;
        }
        else{
            head=head->next;
            head->prev=NULL;
            size--;
        }
        display();
        displayrev();
    }

    void deleteAtIndex(int index){
        if(index<0 || index>=size) {
            cout<<"Error index out of bound!!"<<endl;
            return;
        }
        else if(index==0){
            deleteAtHead();
            return;
        }
        else if(index==(size-1)){
            deleteAtEnd();
            return;
        }
        else{
            if(index<(size/2)){
                int p=1;
                Node *temp=head;
                while(temp!=NULL){
                    if(p==index) break;
                    p++;
                    temp=temp->next;
                }
                temp->next=temp->next->next;
                temp->next->prev=temp;
                size--;
            }
            else{
                int p=size-2;
                Node *temp=tail;
                while(temp!=NULL){
                    if(p==index) break;
                    p++;
                    temp=temp->prev;
                }
                temp->prev=temp->prev->prev;
                temp->prev->next=temp;
                size--;
            }
        }
        display();
        displayrev();
    }

};

int main(){
    LinkedList *l = new LinkedList();
    int a=10;
    for(int i=0;i<5;i++){
        l->insert(l->size,a);
        a+=10;
    }
    l->deleteAtIndex(1);
    l->deleteAtIndex(2);
    l->deleteAtIndex(1);
    l->deleteAtIndex(1);
    l->deleteAtIndex(1);l->deleteAtIndex(0);l->deleteAtIndex(-1);
    return 0;
}