#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }

    void build_bst(Node *&root, int data){
        if (data == -1){
            return;
        }
        
        if(root == NULL){
            root = new Node(data);
        }

        if(data < root -> data){
            build_bst(root -> left, data);
        }

        else if(data > root -> data){
            build_bst(root -> right, data);
        }
    }

    void take_input(Node *&root){
        int data;
        cout << "Enter the root data: ";
        cin >> data;
        while (data != -1){
            build_bst(root, data);
            cin >> data;
        }
    }

     void inorder_traversal(Node *root){
        if(root == NULL){
            return;
        }

        inorder_traversal(root -> left);
        cout << root -> data << " ";
        inorder_traversal(root -> right);
    }

    void preorder_traversal(Node *root){
        if(root == NULL){
            return;
        }

        cout << root -> data << " ";
        preorder_traversal(root -> left);
        preorder_traversal(root -> right);
    }

    void postorder_traversal(Node *root){
        if(root == NULL){
            return;
        }   

        postorder_traversal(root -> left);
        postorder_traversal(root -> right);
        cout << root -> data << " ";
    }

    Node *min_value(Node *&root){
        if(root -> left == NULL){
            return root;
        }

        Node *temp = min_value(root -> left);
        return temp;
    }

    Node *delete_node(Node *&root, int value){
        if(root == NULL){
            return NULL;
        }

        if(value == root -> data){
            if(root -> left == NULL && root -> right == NULL){
                delete root;
                return NULL;
            }

            else if(root -> left != NULL && root -> right == NULL){
                Node *temp = root -> left;
                delete root;
                return temp;
            }

            else if(root -> right != NULL && root -> left == NULL){
                Node *temp = root -> right;
                delete root;
                return temp;
            }

            else if(root -> left != NULL && root -> right!= NULL){
                int mini = (min_value(root -> right)) -> data;
                root -> data = mini;
                root -> right = delete_node(root -> right, mini);
                return root;
            }


        }

        else if(value < root -> data){
            root -> left = delete_node(root -> left, value);
        }

        else{
            
            root -> right = delete_node(root -> right, value);
        }

        return root;
    }

};



int main(){
    Node *root = NULL;
    root -> take_input(root);
    
    // cout << "Preorder Traversal: ";
    // root -> preorder_traversal(root);
    // cout << endl;
    // cout << "Postorder Traversal: ";
    // root -> postorder_traversal(root);
    // cout << endl;

    int value;
    cout << "Enter the value to delete: ";
    cin >> value;

     root -> delete_node(root, value);

    cout << endl;
    cout << "Inorder Traversal: ";
    root -> inorder_traversal(root);
    cout << endl;
}
