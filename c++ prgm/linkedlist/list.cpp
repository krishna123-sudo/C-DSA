
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

node *insert_node(node *head,int i,int data){
    if(i<0){
        cout<<"-1";
    }

    if(i==0){
        node *n=new node(data);
        n->next=head;
        head=n;
        return head;
    }

    node *copyhead=head;
    int count=1;
    while(count<=i-1 && head!=NULL){
        count++;
        head=head->next;
    }

    if(head){
        node*n=new node(data);
        n->next=head->next;
        head->next=n;

        return copyhead;
    }

    return copyhead;
}

int len(node *head){
    int count =0;
    while(head!=NULL){
        count++;
        head=head->next;
    }

    return count;
}

void print(node *head){
    node *temp=head;
    if(head==NULL){
    cout<<"-1";
    }

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

bool is_present(node *head,int data){
    node *curr=head;
    while(curr!=NULL){
        if(curr->data==data){
            return true;
        }
        curr=curr->next;
    }
    return false;
}

int main (){
    node *head=take_input();
    cout<<"enetr the psition u want to insert :"<<endl;
    int i,data;
    cin>>i;
    cout<<"enter the data u want to insert :"<<endl;
    cin>>data;
    head=insert_node(head,i,data);
    cout<<"the value in LL is :"<<endl;
    print(head);
    cout<<endl;
    int key;
    cout<<"enter the value of key u want to search :"<<endl;
    cin>>key;
    if(is_present(head,key)){
        cout<<"found"<<endl;
    }else
    {
        cout<<"not found"<<endl;
    }
    cout<<"the length is :"<<endl;
    cout<<len(head);
}

