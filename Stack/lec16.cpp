//string reversal using stack
#include <iostream>
#include <cstring>
#include <stack>  //stack for standerd template library (STL)
using namespace std;

void Reverse(char *C,int n){
    stack<char> S;
    //loop for push
    for (int i = 0; i < n; i++)
    {
        S.push(C[i]);
    }
    //loop for pop
    for (int i = 0; i < n; i++)
    {
        C[i] = S.top();  //overwrite the character at ndex i.
        S.pop();     //perform pop
    }
    
}

int main() {
    char C[51];
    printf("Enter a string: ");
    gets(C);
    Reverse(C,strlen(C));
    cout<<"Output = "<<C;
return 0;
}