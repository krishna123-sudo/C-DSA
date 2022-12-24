#include<iostream>
using namespace std;

class node{ 
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        next=NULL;
    }
};

node *take_input(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;

    while(data!=-1){
        node *n=new node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }else
        {
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}


//-----recursive approach


// node *reverse(node *head){
//     if(head==NULL or head->next==NULL){
//         return head;
//     }

//     node *temp=reverse(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return temp;
// }



//------itrative aproach

node *reverse(node *head){
    node *curr=head;
    node *prev=NULL;
    while(curr!=NULL){
        node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }

    return prev;
}

void print(node *head){
    node *temp=head;
    if(head==NULL){
    cout<<"-1";
    }

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}


int main (){
    node *head=take_input();
    head=reverse(head);
    print(head);
    return 0;
}