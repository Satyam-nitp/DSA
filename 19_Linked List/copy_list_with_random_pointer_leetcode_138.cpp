#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* random;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->random=NULL;
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
        // display();
    } 

    // Node *deepCopy(Node *head){
    //     Node *deep=new Node(0);
    //     Node *d=deep,*temp=head;
    //     while(temp){
    //         Node *n=new Node(temp->val);
    //         d->next=n;
    //         d=d->next;
    //         temp=temp->next;
    //     }
    //     return deep->next;
    // }

    Node *copyRandom(Node *head){
        Node *deep=new Node(0);
        Node *d=deep,*temp=head;
        while(temp){
            Node *n=new Node(temp->val);
            d->next=n;
            d=d->next;
            temp=temp->next;
        }
        temp=deep->next;
        Node *t=head;
        Node *n=temp;
        unordered_map<Node*, Node*> m;
        while(t){
            m[temp]=t;
            t=t->next;
            temp=temp->next;
        }
        for(auto i:m){
            if(i.first->random!=NULL) i.second->random=m[i.first->random];
        }
        return n;
    }

};

int size(Node *head){
    int c=0;
    Node *temp=head;
    while(temp){
        c++;
        temp=temp->next;
    }
    return c;
}

void display(Node *head){
    Node *t=head;
    while(t){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<"NULL"<<endl;
}

void display2(Node *head){
    Node *t=head;
    while(t){
        cout<<t->val<<" ";
        if(t->random!=NULL) cout<<" , Random value "<<t->random->val<<"  ";
        t=t->next;
    }
    cout<<endl;
}

Node* merge(Node *h1, Node *h2){
    Node *a=h1;
    Node *b=h2;
    Node *dummy=new Node(0);
    Node *c=dummy;
    while(a){
        c->next=a;
        a=a->next;
        c=c->next;
        c->next=b;
        b=b->next;
        c=c->next;
    }
    return h1;
}

//<<<<----------impoooorrttaannnntttttt------------------>>>>>>>>>>

// ********************************************************
//********************************************************* */
//************************************************* */
//**************************************************** */
// important
// STEP-1 create deep copy without random pointer
// STEP-2 after that merge *****alternatly***** original and deep copy linked list 
// STEP-3 Assigning random pointer of deep copy wali linked list
// which is equal to :
// t1 & t2 assign accordingly;
// important *******t2 -> random = t1 -> random ->next;*********
//STEP-4 removing the connections

int main(){
    LinkedList *l = new LinkedList();
    l->insertAtTail(7);
    l->insertAtTail(13); 
    l->insertAtTail(11); 
    l->insertAtTail(10);
    l->insertAtTail(1);
    l->display();
    Node *deep=new Node(0);
    Node *d=deep,*temp=l->head;
    while(temp){
        Node *n=new Node(temp->val);
        d->next=n;
        d=d->next;
        temp=temp->next;
    }
    display(deep->next);
    // Node *merged=merge(l->head,deep->next);
    // display(merged);
    // Node *a=merged;
    // while(a){
    //     Node *b=a->next;
    //     if(a->random) b->random=a->random->next;
    //     a=a->next->next;
    // }
    // display(merged);
    // Node *separate=new Node(0);
    // Node *s=separate;
    // Node *remove=merged;
    // int c=0;
    // while(remove){
    //     if(c%2!=0){
    //         s->next=remove;
    //         s=s->next;
    //     }
    //     remove=remove->next;
    //     c++;
    // }
    // display2(separate->next);
    // // finally this is the result
    // cout<<endl<<"2nd method"<<endl;
    // display2(l->copyRandom(l->head));
    Node *a=l->head;
    Node *b=deep->next;
    Node *n=b;
    unordered_map<Node*, Node*> m;
    while(a){
        m[a]=b;
        a=a->next;
        b=b->next;
    }
    for(auto i:m){
        if(i.first->random!=NULL) i.second->random=m[i.first->random];
    }
    display2(n);
    return 0;
}