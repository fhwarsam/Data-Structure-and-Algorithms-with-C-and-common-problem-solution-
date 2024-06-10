#include "Node.cpp"
#include "HashTable.hpp"
#include<vector>
#include<unordered_map>
class HashTable{
    private:
        static const int SIZE=7;
        Node* dataMap[SIZE];

        public:
        void printTable(){
            for(int i=0; i< SIZE; i++){
                std::cout << i << ":" << "\n";
                if(dataMap[i]){
                    Node* temp = dataMap[i];
                    while(temp){
                        std::cout << "{" << temp->key << "," << temp->value << "}" <<"\n";
                        temp = temp->next;
                    }
                }
                
            }

        }

        // This is the method that calculates the 
        // index number that is going to be used to store keys 
        int hash(std::string key){
            int hash = 0;
            for(int i=0; i < key.length(); i++){
                int asciiValue = int(key[i]);
                hash = (hash + asciiValue *23)%SIZE;
            }
        return hash;
        }
        //This method adds elements to the table.
        //It first gets the index and creates a Node
        // If the table is empty, then that node becomes the first item 
        //and gets stored in the index position.
        // If there are othe items in the table we create a temperary node 
        // that points to the Node at the index and inserts at next available place. 
        void set(std::string key, int value){
            int index = hash(key);
            Node* newNode = new Node(key, value);
            if(dataMap[index] == nullptr){
                    dataMap[index] = newNode; 
                    }
           else {
                Node* temp = dataMap[index];
                while(temp->next  != nullptr){
                    temp = temp->next;
                }
                temp->next = newNode;


           }
        }
        int get(std::string key){
            int index = hash(key);

            Node* temp = dataMap[index];
            while(temp != nullptr) {
                if(temp->key == key)return temp->value;
                temp = temp->next;
                }


            return 0;
        }
    
       std::vector<std::string> keys(){
        std::vector<std::string> allkeys;
        for(int i=0; i<SIZE; i++){
            Node* temp = dataMap[i];
            while(temp != nullptr){
                allkeys.push_back(temp->key);
                temp= temp->next;
            }


        }
            return allkeys;
       }
       // Common asked quistion part 1
// find the commmon item in table
bool itemInCommonBruteForce(std::vector<int> vect1,std::vector<int> vect2){
    for(auto i : vect1){
        for(auto j : vect2){
            if(i==j) return true;
        }
    }
    return false;   
}

    bool itemInCommonHashMap(std::vector<int> vect1,std::vector<int> vect2){

        std::unordered_map<int, bool> myMap;
    }
};