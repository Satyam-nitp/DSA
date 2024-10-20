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
            while(temp->next->next!=NULL) temp=temp->next;
            temp->next=NULL;
            size--;
        }
        display();
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
            size--;
        }
        display();
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
        else{
            int p=1;
            Node *temp=head;
            while(temp!=NULL){
                if(p==index) break;
                p++;
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
        display();
    }

};

int main(){
    LinkedList *l1 = new LinkedList();
    l1->display();
    int a=10;
    for(int i=0;i<3;i++){
        l1->insert(l1->size,a);
        a+=10;
    }
    LinkedList *l2 = new LinkedList();
    l2->insertAtHead(10);
    l2->insertAtTail(20);
    l2->insertAtTail(40);
    l2->insertAtTail(50);
    cout<<endl<<"l1 is: ";
    l1->display();
    cout<<"l2 is: ";
    l2->display();
    cout<<endl;
    LinkedList *l3 = new LinkedList();
    Node *t1=
    return 0;
}