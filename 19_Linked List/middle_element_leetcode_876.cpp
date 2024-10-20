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
        display();
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
        display();
    }

    int middle(){
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->val;
    }

};

int main(){
    LinkedList *l = new LinkedList();
    l->display();
    int a=10;
    for(int i=0;i<=5;i++){
        l->insert(l->size,a);
        a+=10;
    }
    cout<<"Middle element is: "<<l->middle()<<endl;
    return 0;
}