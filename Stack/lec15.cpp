//Stack:- Linked List implementation

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* link;
};
Node* top = NULL;
void Push(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = top;
    top = temp;
}
void Pop(){
    Node* temp;
    if (top == NULL)
    {
        return;
    }
    temp = top;
    top = top->link;
    free(temp);       
}
void Top(){
    Node* temp;
    cout<<temp->data;
}

int main() {
        Push(2);
        Push(34);
        Push(11);
        Pop();
        Top();
return 0;
}