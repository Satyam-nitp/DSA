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

    void reverse(Node *h){
        if(h==NULL || h->next==NULL) return;
        Node *prev=NULL;
        Node *curr=h;
        Node *n=h->next;
        while(n!=NULL){
            curr->next=prev;
            prev=curr;
            curr=n;
            n=n->next;
        }
        curr->next=prev;
        h=curr;
        display();
    }

    void reorderList() {
        Node *slow=head;
        Node *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *t=slow->next;
        slow->next=NULL;
        reverse(t);
        Node *ans=new Node(100);
        Node *a=ans;
        int b=0;
        Node *temp=head;
        while(temp!=NULL && t!=NULL){
            if(b%2==0){
                a->next=temp;
                temp=temp->next;
            }
            else{
                a->next=t;
                t=t->next;
            }
            a=a->next;
            b++;
        }
        display();
    }

};

int main(){
    LinkedList *l = new LinkedList();
    l->display();
    int a=10;
    for(int i=0;i<5;i++){
        l->insert(l->size,a);
        a+=10;
    }
    l->reverse(l->head);
    cout<<endl;
    l->reorderList();
    return 0;
}