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

node* buildtree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the left "<<data<<": "<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the right "<<data<<": "<<endl;
    root->right = buildtree(root->right);
    return root;
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
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void preorder(node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool search(node* root, int key){
    if(root == NULL){
        return false; // Key not found
    }

    if(root->data == key){
        return true; // Key found
    }

    if(key < root->data){
        return search(root->right, key);
    }else{
        return search(root->left, key);
    }
}


int getheight(node* root){
    if(root == NULL){
        return 0;
    }
    int left_height= getheight(root->left);
    int right_height = getheight(root->right);

    return 1 + max(left_height, right_height);
}

int main(){
    node* root = NULL;

    root = buildtree(root);

    cout<<"The level order traversal is: "<<endl;
    levelordertraversal(root);

    cout<<"The post order traversal is: "<<endl;
    postorder(root);
    cout<<endl;

    cout<<"The Pre Order Traversal is: "<<endl;
    preorder(root);
    cout<<endl;

    cout<<"The Inorder traversal is: "<<endl;
    inorder(root);
    cout<<endl;

    cout<<"The Height of the binary tree is: "<<endl;
    cout<<getheight(root)<<endl;

    cout<<"Enter any number you want to search in this binary tree: ";
    int n;
    cin>>n;
    cout<<endl;

    bool find = search(root, n);
    if( find ){
        cout<<"The key is present"<<endl;
    }else{
        cout<<"The Key is not present"<<endl;
    }

}
