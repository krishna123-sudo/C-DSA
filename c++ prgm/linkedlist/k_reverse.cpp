#include<iostream>
using namespace std;

class node {
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

// node* kReverse(node *head,int k){
// 	//base case
// 	if(head==NULL){
// 		return NULL;
// 	}

// 	//reverse the first k nodes
// 	node* prev = NULL;
// 	node* current = head;
// 	node * temp;
// 	int cnt = 1;

// 	while(current!=NULL and cnt<=k){
// 		//store next
// 		temp = current->next;
// 		//update the current
// 		current->next = prev;

// 		//prev and current
// 		prev = current;
// 		current = temp;
// 		cnt++;
// 	}

// 	if(temp!=NULL){
// 		 head->next = kReverse(temp,k);
// 	}
// 	return prev;
// }


node* k_reverse(node *head,int k){
	if(head==NULL){
		return NULL;
	}
	node* prev = NULL;
	node* current = head;
	node * temp;
	int cnt = 1;

	while(current!=NULL and cnt<=k){
		temp = current->next;
		current->next = prev;
		prev = current;
		current = temp;
		cnt++;
	}

	if(temp!=NULL){
		 head->next = k_reverse(temp,k);
	}
	return prev;
}

void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

int main()
{   node* head =take_input();
	print(head);
    cout<<endl;
	head = k_reverse(head,3);
	print(head);

    return 0;

}