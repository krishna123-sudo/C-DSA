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
 
bool has_cycle(node *head){
    //Complete this function 
    
    if(head == NULL || head->next == NULL) return false;
    
    node *slow = head;
    node *fast = head->next;
    
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
        {
            return 1;
        }
    }
    return 0;
}