//Linked List: Delet a Node at nth position
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head;

void Insert(int data){
    Node* temp  = new Node();
    temp->data = data;
    temp->next = NULL;
     if (head != NULL)
    {
        temp->next = head;
    }
    head = temp;   

}
void Print(){
    Node* temp = head;
    cout<<"List is : ";
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next ;
    }
    cout<<endl;
}
void Delete(int n){
    Node* temp1 = head;
    if (n == 1)
    {
        head = temp1->next; //head now point to second Node.
        free(temp1);
        return;
    }
    for (int i = 0; i < n-2; i++)
    {
        temp1 = temp1->next;
        //temp points to (n-1) Node
        Node* temp2 = temp1->next; //nth Node
        temp1->next = temp2->next; //(n+1) th Node  
        free(temp2); //delete temp2
    }
    
    
}

int main() {
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); //List : 2 4 6 5
    Print();
    int n;
    cout<<"Enter a Position"<<endl;
    cin>>n;
    Delete(n);
    Print();

return 0;
}