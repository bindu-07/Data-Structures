#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
//Global variable, can be accessed anywhere 
Node* head;

void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
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
        temp = temp->next;
    }
    cout<<endl;
    
}

int main() {
    head = NULL; //empty List
    
    int x,n;
    cout<<"How many Numbers??"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number"<<endl;
        cin>>x;
        Insert(x);
        Print();
    }    
    
return 0;
}