#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void insertAtHead(int val){
        Node *temp=new Node(val);
        if(head==NULL) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
        display();
    }

    void insertAtTail(int val){
        Node *temp=new Node(val);
        if(head==NULL) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
        display();
    }

    void insert(int idx,int val){
        Node *temp=new Node(val);
        if(idx<0 || idx>size){
            cout<<"Error!! Index out of bound"<<endl;
            return;
        }
        else if(idx==0){
            insertAtHead(val);
            return;
        }
        else{
            Node *t1=head;
            Node *t2=head->next;
            for(int i=0;i<idx-1;i++){
                t1=t1->next;
                t2=t2->next;
            }
            t1->next=temp;
            temp->next=t2;
            size++;
        }
        display();
    }

    void removeDuplicate(){
        Node *t1=head;
        Node *t2=head->next;
        while(t2!=NULL){
            if(t1->val==t2->val){
                t1->next=t2->next;
                t2=t1->next;
                size--;
            }
            else{
                t1=t1->next;
                t2=t2->next;
            }
        }
        display();
    }

};

int main(){
    LinkedList *l=new LinkedList();
    l->insert(0,10);
    l->insertAtHead(100);
    l->insertAtHead(100);
    l->insertAtHead(100);
    cout<<"Size is: "<<l->size<<endl;
    l->insertAtTail(40);
    l->insertAtTail(25);
    l->insert(l->size,75);
    cout<<"Size is: "<<l->size<<endl;
    l->insertAtTail(40);
    l->insertAtTail(40);
    l->insertAtTail(40);
    cout<<"Size is: "<<l->size<<endl;
    l->removeDuplicate();
    cout<<"Size is: "<<l->size<<endl;
    l->display();
    return 0;
}