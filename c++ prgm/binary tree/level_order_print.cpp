#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

node *build()
{
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node *n=new node (d);
    n->left=build();
    n->right=build();

    return n;
}

void levelorder(node *root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp=q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();

            if(!q.empty())
            {
                q.push(NULL);
            }
        }else
        {
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main (){
    node *root=build();
    levelorder(root);
}