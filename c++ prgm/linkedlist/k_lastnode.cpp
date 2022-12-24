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

node *take_input()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
 
    while (data != -1)
    {
        node *n = new node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
 
        cin >> data;
    }
 
    return head;
}

int length(node *head){
    int cnt=0;
    while(head){
        cnt++;
        head=head->next;
    }

    return cnt;
}

int k_node(node *head,int p){
    int n=length(head)-p+1;
    int curr=1;
    while(curr<n){
        head=head->next;
        curr++;
    }
    cout<<head->data;
}

int main (){
    node *head=take_input();
    int p;
    cin>>p;
    k_node(head,p);
    // int k=length(head);
    // cout<<k;

    return 0;
}