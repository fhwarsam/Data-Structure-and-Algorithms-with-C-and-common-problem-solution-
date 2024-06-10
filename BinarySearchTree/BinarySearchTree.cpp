#include<iostream>
//#include "BinarySearchTree.hpp"
#include "Node.cpp"

class BinarySearchTree
{
public:
    Node* root;
    int length;
public:
    BinarySearchTree(){
         root = nullptr;
         length =0;
    }

    bool insert(int value){
        Node* newNode = new Node(value);
        if(root == nullptr){
            root = newNode;
            return true;
        }
        Node* temp = root;
        while(true){
            if (newNode->value == temp->value) return false;
            if(newNode->value < temp->value){
                if(temp->left ==nullptr){
                temp->left = newNode;
                return true;
            }
            temp = temp->left;
            }
        
        else{
            if(temp->right == nullptr){
                temp->right = newNode;
                return true;
            }

            temp = temp->right;
        }
        }
        

    }
    void printBST(){
        Node* temp = root;
            while(temp!=nullptr){
                std::cout << temp->value <<" \n";
                temp = temp->left;

            }
            temp=root->right;
            while(temp!= nullptr){
                std::cout<< temp->value << "\n";
                temp=temp->right;
            }

        }
        bool contains(int value){
            if(root == nullptr) return false;
            Node* temp = root;
            while(temp){
                if(value < temp->value){
                    temp = temp->left;
                }
                else if(value > temp->value){
                    temp= temp->right;
                }
                else {
                    return true;
                    }

            }
            return false;


        }
};

