//Doubly Linked List- Implementation
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* prev;    
};
Node* head; // Global variable
Node* GetNewNode(int x){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void InsertAtHead(int x){
    Node* temp = GetNewNode(x);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head= temp;        
}
void Print(){
    Node* temp = head;
    cout<<"Forward :";
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void ReversedPrint(){
    Node* temp = head;
    if (temp == NULL)
    {
        return; //empty list exit
    }
    // Going to Last Node
    while (temp->next != NULL)
    {
        temp = temp->next;        
    }
    //Traversinr backward using prev pointer
    cout<<"Reverse: ";
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;      
    
}
int main() {
    head = NULL;

    InsertAtHead(2); Print(); ReversedPrint();
    InsertAtHead(4); Print(); ReversedPrint();
    InsertAtHead(6); Print(); ReversedPrint();  

return 0;
}