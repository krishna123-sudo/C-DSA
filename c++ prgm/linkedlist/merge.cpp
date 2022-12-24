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
/// mergetwo sorted list...............................................
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

    node* mergeTwoLists(node* a, node* b) {
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        node* newHead = NULL;
        if(a->data < b->data){
            newHead = a;
            newHead ->next = mergeTwoLists(a->next, b);
        }else{
            newHead = b;
            newHead->next = mergeTwoLists(a,b->next);
        }
        
        return newHead;

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
    node *a=take_input();
    node *b=take_input();
    node *head=mergeTwoLists(a,b);
    print(head);

    return 0;

}