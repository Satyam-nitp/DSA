#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
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
void display(vector<int> v){
    cout<<"[";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1) cout<<",";
    }
    cout<<"]"<<endl;
    return;
}
int main(){
    LinkedList *l = new LinkedList();
    l->insertAtTail(1);
    l->insertAtTail(3);
    l->insertAtTail(2);
    l->insertAtTail(2);
    l->insertAtTail(2);
    l->insertAtTail(2);
    l->insertAtTail(2);
    l->insertAtTail(3);
    l->insertAtTail(1);
    Node *a=l->head;
    Node *b=l->head->next;
    Node *c=l->head->next->next;
    int idx=1;
    int f=-1;
    int s=-1;
    int m=INT_MAX;
    int fs=-1;
    int ss=-1;
    while(c){
        if((b->val>a->val && b->val>c->val) || (b->val<a->val && b->val<c->val)){
            if(f==-1) f=idx;
            else s=idx;
            fs=ss;
            ss=idx;
            if(fs!=-1) m=min(m,(ss-fs));
        }
        a=a->next;
        b=b->next;
        c=c->next;
        idx++;
    }
    if(s==-1){
        cout<<"[-1,-1]"<<endl;
        return 0;
    }
    int maxd=s-f;
    vector<int> ans;
    ans.push_back(m);
    ans.push_back(maxd);
    display(ans);
    return 0;
}