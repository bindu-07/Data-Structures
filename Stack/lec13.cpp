// Stack- Array based implementation
#include <iostream>
#define MAX_SIZE 101
using namespace std;

int A[MAX_SIZE];
int top = -1;

//Push(x) function for add data in array
void Push(int x){
    if (top == MAX_SIZE-1)
    {
        cout<<"Error: stack overflow"<<endl;
        return;
    }
    
    A[++top] = x;
}

//Pop() function for remove data in array
void Pop(){
    if (top == -1)
    {
        cout<<"Error: No element to top"<<endl;
        return;
    }
    top--;
}

//Top() fuction for see what is top value
void Top(){
    cout<<A[top]<<endl;
}
void Print(){
    cout<<"Stack: ";
    for (int i = 0; i <= top; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
bool isEmpty(){
    if (top == -1)
    {
        
        cout<<"there is Empty set"<<endl;
       
    }else{
    cout<<"there is not a Empty set"<<endl;
    }
               
}

int main() {
    Push(2);  Print();
    Push(5);  Print();
    Push(10); Print(); 
    Push(56); Print();  
    Pop();    Print();
    Top();    
    Push(12); Print();
    Top();
    isEmpty();
    
return 0;
}