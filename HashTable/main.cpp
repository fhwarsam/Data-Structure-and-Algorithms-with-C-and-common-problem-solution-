#include<iostream>
#include "HashTable.cpp"

int main(){
HashTable* ht = new HashTable();
std::cout << " ........... Printing  table ............. \n";
ht->printTable();
std::cout << " .................... end of table .............. \n\n";


//Inserting one item with key 'first one ' and value '0' ";
// and printing out the items in the table
std::cout << " ::::::::::::: Adding Item to the table ::::::::::::: \n\n";
ht->set("First one", 0);
std::cout << " ........... Printing  table ............. \n";
ht->printTable();
std::cout << " .................... end of table .............. \n\n";


//Inserting one item with key 'second one ' and value ' 1' ";
// and printing out the items in the table
std::cout << " ::::::::::::: Adding Item to the table ::::::::::::: \n\n";
ht->set("second one", 1);
std::cout << " ........... Printing  table .................... \n";
ht->printTable();
std::cout << " ............ end of table ....................... \n\n";

//Inserting one item with key 'third one ' and value ' 2' ";
// and printing out the items in the table
std::cout << " ::::::::::::: Adding Item to the table ::::::::::::: \n\n";
ht->set("third one", 2);
std::cout << " ........... Printing  table .................... \n";
ht->printTable();
std::cout << " ............ end of table ...................... \n\n";



std::cout << " ::::::::::::: Test for get method ::::::::::::: \n\n";
std::cout << " ........... Printing  get returned value .................... \n";
std::cout <<"The value at the given key is:  " << ht->get("third one") << "\t\t\t\n\n";
std::cout << " \n............ end of get ...................... \n\n";


std::vector<std::string> keys = ht->keys();
std::cout << " ........... going throught all the keys and print them ........... \n";
for(auto key : keys){
std::cout<< key<< " \n";
}
std::cout << " ........... End of key traversal ................................. \n";
std::vector<int> v;
std::vector<int> v2;
std::cout << ht->itemInCommonBruteForce(v, v2);
    return 0;
}