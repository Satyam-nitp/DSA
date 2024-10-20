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
    Node *head=NULL;
    Node *tail=NULL;
    int size=0;

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
        if(tail==NULL) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
        display();
    }

};

int main(){
    LinkedList *l=new LinkedList();
    l->display();
    int a=10;
    l->insertAtTail(30);
    l->insertAtTail(40);
    l->insertAtHead(20);
    l->insertAtHead(10);
    // for(int i=0;i<5;i++){
    //     l->insertAtTail(a);
    //     a+=10;
    // }
    return 0;
}