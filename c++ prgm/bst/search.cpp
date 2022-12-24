#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
   int key;
   Node *left;
   Node *right;

   Node(int key){
       this->key = key;
       left = right  = NULL;
   }
};

Node *insert(Node *root,int key){
    if(root==NULL){
        return new Node(key);
    }
      if(key<root->key){
    root->left=insert(root->left,key);
    }else
    {
        root->right=insert(root->right,key);
    }


return root;
}


bool isPresent(Node * root,int key){
    //Complete this method
    if(root==NULL){
        return false;
    }
    if(root->key==key){
        return true;
    }
    if(root->key<key){
        return isPresent(root->right,key);
    }else
    {
      return  isPresent(root->left,key);
    }
    
}

int main (){
    Node *root=NULL;
    int arr[]={8,2,10,1,6,14,4,7,13};
    for(int x: arr){
        root=insert(root,x);
    }
    int key;
    cin>>key;
    if(isPresent(root,key)){
        cout<<"true";
    }else
    {
        cout<<"false";
    }
return 0;
}