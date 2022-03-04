#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;

        //cunstructor 
        node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};
node* buildTree(node* root){
    cout<<"enter the data";
    int data;
    cin>>data;
    root=new node(data);

    //base case
    if(data==-1) return NULL;

    //recursive call
    cout<<"enter the data you want to insert in the left of"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the value you want to insert in thr right"<<data<<endl;
    root->right=buildTree(root->right);
    return root;
    
}
void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    
    //ek hi elemenet toh hoga na first level pe
    //ab next line m laane k liye null laga diya jiska ki abhu hum case bana lenge
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            //purana level khatam ho chuka h
            //separator ka use karenge.

            
            cout<<endl;
            if(!q.empty()) 
            //queue will have child nodes
                q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }

}
void inorderTraversal(node* root){//LNR
    //base casw
    if(root==NULL)
        return;

    //recursive call
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void preorderTraversal(node* root){//NLR
    //base casw
    if(root==NULL)
        return;

    //recursive call
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    
    preorderTraversal(root->right);
}
void postorderTraversal(node* root){//LRN
    //base casw
    if(root==NULL)
        return;

    //recursive call
    
    postorderTraversal(root->left);
    
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
node* root=NULL;
root=buildTree(root);

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
cout<<"printing the level order traversal"<<endl;
levelOrderTraversal(root);
cout<<endl<<"printing the inorder traversal"<<endl;
inorderTraversal(root);
cout<<endl<<"printing the inorder traversal"<<endl;
preorderTraversal(root);
cout<<endl<<"printing the inorder traversal"<<endl;
postorderTraversal(root);

return 0;
}