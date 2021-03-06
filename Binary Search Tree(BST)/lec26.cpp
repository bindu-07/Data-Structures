//Binary Search Tree - Implementation in C++
#include <iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};
BstNode* root; 
BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BstNode* Insert(BstNode* root, int data){
    if (root == NULL) //empty tree
    {
        root = GetNewNode(data);
        return root;
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left,data);

    }else
    {
        root->right = Insert(root->right,data);
    }
    return root;   

}
bool Search(BstNode* root, int data){
    if (root == NULL) return false;
    else if (root->data == data) return true;
    else if (data <= root->data) return Search(root->left,data);
    else return Search(root->right,data);  
    
}

int main() {   
    BstNode* root = NULL; //Creating a empty tree 
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
    //Ask user for enter number
    int num;
    cout<<"Enter number be searched\n";
    cin>>num;
    if (Search(root,num) == true) cout<<"Found\n";

    else cout<<"Note Found\n";
    
return 0;
}