#include <iostream>
#include<vector>
#include "Vector_Stack.hpp"
class Stack{
    private:
        std::vector<int> stackVector; 
    public:
    Stack(){}
        std::vector<int>& getStackvector(){
            return stackVector;
        }

        void printStack(){
            for(int i=0; i<stackVector.size() -1; i++){
                std::cout<< stackVector[i] <<"\n";
            }
        }
        bool isEmpty(){
            return stackVector.size() ==0;
        }

        int peek(){
            if(isEmpty()){
                return int();
            }else {
                return stackVector.size() -1;
            }
        }
        int size(){
            return stackVector.size();
        }

        void push(int value){
            stackVector.push_back(value);

        }

        void pop(){
            if(size() !=0)
            stackVector.pop_back();
        }           

        // void reversedString(std::string &str){
        //     for(char ch: str) stackVector.push_back(ch);
        //     for(int i=0; i< str.length(); i++){
        //         str[i] = stackVector.pop_back();
        //         stackVector.pop_back();

        //     }
        // }
            
};