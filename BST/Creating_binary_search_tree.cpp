#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    //chalo ek cunstructor banaya jaaya
    node (int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }
};
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
    node* insert_into_BST(node* root,int d){
        //base case
        //jab pehle root null ho toh us case m
        if(root==NULL){
            //ek node create kar lenge aur usse hi return kar denge
            root=new node(d);
            return root;
        }
        //baaki ab case laga k karte h saara 
        if(d < root->data)
            root->left=insert_into_BST(root->left,d);
        else
             root->right=insert_into_BST(root->right,d);
        return root;
    }
    void input_data(node*& root){
        int data;
        cin>>data;
        while(data!=-1){
            root=insert_into_BST(root,data);
            cin>>data;
        }
    }
    node* minValue(node* root){
        while(root!=NULL){
            root=root->left;
        }
        return root;
    }
    node* delete_from_BST(node* root, int value){
        if(root==NULL) return root;

        if(root->data==value){
            //0
            if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
            //1
            if(root->left && root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
            if(root->right && root->left==NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
            //2
            if(root->left!=NULL && root->right!=NULL){
            int mini=minValue(root->right)->data;
            root->data=mini;
            //now delete the right root's min element;
            root->right=delete_from_BST(root->right,mini);
            return root;
        }
        }

        else if(root->data > value){
            root->left= delete_from_BST(root->left,value);
        }
        else
            root->right=delete_from_BST(root->right,value);
        
        return root;

    }

int main(){
    node* root=NULL;
    cout<<"enter the data for binary search tree \n";
    input_data(root);
    //now we will do level order traversing
    cout<<"\nwe will do level order traversal \n";
    levelOrderTraversal(root);
    cout<<"\nwe will do inorder traversal \n";
    inorderTraversal(root);
    cout<<"\nwe will do preorder traversal \n";
    preorderTraversal(root);
    cout<<"\nwe will do postorder traversal \n";
    postorderTraversal(root);
    delete_from_BST(root,5);
    cout<<"\nafter deletion the answer will be\n";
    cout<<"\nwe will do level order traversal \n";
    levelOrderTraversal(root);
    cout<<"\nwe will do inorder traversal \n";
    inorderTraversal(root);
    cout<<"\nwe will do preorder traversal \n";
    preorderTraversal(root);
    cout<<"\nwe will do postorder traversal \n";
    postorderTraversal(root);
return 0;
}