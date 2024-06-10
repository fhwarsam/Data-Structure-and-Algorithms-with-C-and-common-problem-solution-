#ifndef HASHTABLE_H
#define HASHTABLE_H
#include<iostream>
#include<vector>

// This prints all the elements in the hashtable
void printTable();

// set method takes a key and a values and puts the pair in the table
void set(std::string key, int value);
//
int hash(std::string key);
//
int get(std::string key);

// method that gets all the keys and recturns a vector
std::vector<std::string> keys();

// Common asked quistion part 1
// find the commmon item in table
bool itemInCommonBruteForce(std::vector<int> vect1,std::vector<int> vect2);


// This methods returns an item thats common to both vectors
// but used hashtables.
bool itemInCommonHashMap(std::vector<int> vect1,std::vector<int> vect2);
#endif