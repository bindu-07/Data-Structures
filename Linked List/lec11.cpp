#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head;
void ReversePrint(Node* p){
    if (p->next ==NULL) {
        head = p;
        return;
    } //Exit condition  
    ReversePrint(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;       
    // cout<<head->data<<" "; //First Print the valure of the Node    
    // ReversePrint(head->next); //recursion call      
    // cout<<head->data<<" ";
    
}
Node* Insert(Node* head, int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if (head == NULL) head = temp;
    
    else
    {
        Node* temp1 = head;
        while (temp1->next != NULL) temp1 = temp1->next;           
        temp1->next = temp;     
        
    }
    return head;       
}

int main() {
    Node* head = NULL; //local variable
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,5);
    ReversePrint(head);
return 0;
}