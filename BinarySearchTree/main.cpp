#include<iostream>
#include "BinarySearchTree.cpp"
#include "BinarySearchTree.hpp"


int main(){

BinarySearchTree *bst = new BinarySearchTree();
std::cout << bst->root << "\n" ;
    bst->insert(47);
        bst->insert(21);
            bst->insert(76);
                bst->insert(18);
                    bst->insert(27);
                        bst->insert(52);
                            bst->insert(82);
   // std::cout << bst->root->left->value << "\n" ;
     //   std::cout << bst->root->right->value << "\n" ;
        bst->printBST();
                      std::cout <<"Expects to return true \n";
       std::cout << bst->contains(47) <<" \n";
              std::cout <<"Expected to return false \n";
              std::cout << bst->contains(7) <<" \n";
    return 0;
}