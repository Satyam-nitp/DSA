#include<iostream>
#include<vector>
#include<algorithm>
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
    void reverse(){
        Node *t=NULL;
        head->next=t;
        display();
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
int main(){
    LinkedList *l = new LinkedList();
    l->display();
    int a=1;
    for(int i=1;i<=15;i++){
        l->insert(l->size,a);
        a+=1;
    }
    int n=l->size; 
    int k=4;
    int x=n/k;
    int r=n%k;
    Node *temp=l->head;
    while(temp){
        Node *c=new Node(100);
        Node *tempC=c;
        int s=x;
        if(r>0) s++;
        r--;
        for(int i=1;i<=s;i++){
            tempC->next=temp;
            temp=temp->next;
            tempC=tempC->next;
        }
        tempC->next=NULL;
        display(c->next);
    }
    return 0;
}