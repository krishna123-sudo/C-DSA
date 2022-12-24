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

//--create a linkedlist;
node *take_input(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1){
        node*n=new node(data);
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

node * insert(node *head,int data){
        int pos;
        cin>>pos;
        cin>>data;
        
        if(pos<0){
            cout<<"-1";
        }
       if(pos==0){
            node*n=new node(data);
            n->next=head;
            head=n;
            return head;
       }
       node *temp=head;
       int count=1;
       while(count<=pos-1 and head!=NULL){
            head=head->next;
            count++;
       }
       if(head){
        node *n=new node(data);
        n->next=head->next;
        head->next=n;
        return temp;

       }

       return temp;

}

int main(){
    int data,pos;
    node*head=take_input();
    print(head);
    head=insert(head,data);
    print(head);

    return 0;
}