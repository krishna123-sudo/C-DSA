#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
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
// int length(node *head){
//     int count=0;
//     while(head!=NULL){
//         count++;
//         head=head->next;
//     }
//     return count;
// }
// int getMid(node *head){
//     //Complete this function to return data middle node
//     int n=length(head)/2;
//     int curr=1;
//     while(curr<=n){
//         head=head->next;
//         curr++;
//     }
    
//     cout<<head->data;
// }

node * getMid(node *head){
    //Complete this function to return data middle node
    node *slow=head;
    node *fast=head->next;
    while(fast and fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast->next==NULL){
        return slow->next;
    }else
    {
        return slow;
    }   
    
}

void print(node *head){
    while(head)
    {cout<<head->data;}
}

int main (){
    node *head=take_input();
    head=getMid(head);
    print(head);
    return 0;
}