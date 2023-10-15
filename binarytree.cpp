#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insert(node* root, int data){
  if(root==NULL){
    return new node(data);
  }

  if(data>root->data){
    root->right = insert(root->right, data);
  }else if(data<root->data){
    root->left = insert(root->left, data);
  }

  return root;
}

node* buildtree(){
    node* root = NULL;
    int data;

    while(true){
        cout<<"Enter the data or (-1) to exit: ";
        cin>>data;

        if(data == -1){
            break;
        }

        root = insert(root, data);
    }

    return root;
}


void inordertraversal(node* root){
    if(root!=NULL){
        inordertraversal(root->left);
        cout<<root->data<<" ";
        inordertraversal(root->right);
    }
}

node* deletion(node* root, int key){
    if(root==NULL){
        return NULL;
    }

    if(key>root->data){
        root->right = deletion(root->right, key);
        return root;
    }else if(key<root->data){
        root->left = deletion(root->left, key);
        return root;
    }

    if(root->left==NULL){
        node* temp = root->right;
        delete root;
        return temp;
    }
    else if(root->right == NULL){
        node* temp = root->left;
        delete root;
        return temp;
    }

    if(root->left != NULL && root->right != NULL){
        node* temp = root->right;
        temp->left = root->left;
        delete root;
        return temp;
    }
}

void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
            q.push(NULL);        
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    node* root = buildtree();

    cout<<"The inorder traversal is: "<<endl;
    inordertraversal(root);
    cout<<endl;

    int key;
    cout<<"Enter the key you want to delete: "<<endl;
    cin>>key;

    deletion(root, key);
    cout<<"The inorder traversal is: "<<endl;
    inordertraversal(root);
    cout<<endl;

}