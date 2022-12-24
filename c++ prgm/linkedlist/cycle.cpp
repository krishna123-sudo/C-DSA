#include<iostream>
#include<unordered_map>
using namespace std;

class node{
    public:
    int data;
    node*next=NULL;

    node(int data){
        this->data=data;
        next=NULL;
    }
};




bool contain_cycle(node*head){
    unordered_map<node*,bool> hash;
    node *temp=head;
    while(temp!=NULL){
        //check if temp is already present
        if(hash.count(temp)!=0){
            return true;
        }
        hash[temp]=true;
        temp=temp->next;
    }
    return false;
}
void insertAtHead(node *&head,int data){
    if(head==NULL){
       head=new node(data);
       return;
    }
    node*n=new node(data);
    n->next=head;
    head=n;
}


int main (){

    node *a=NULL;
    insertAtHead(a,1);
    insertAtHead(a,2);
    insertAtHead(a,3);
    insertAtHead(a,4);
    insertAtHead(a,5);

    //
    node* temp=a->next->next->next->next;
    temp->next=a->next->next;
    if(contain_cycle(a)){
        cout<<"cycle found"<<endl;
    }else
    {
        cout<<"cycle not found"<<endl;
    }



}