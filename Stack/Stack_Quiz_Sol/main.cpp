#include<iostream>
#include<string>
#include<stack>
using namespace std;



//void reversestring(const string &str);
int main(){
string str = "hello world";
cout << " original string is: " << str << "\n";
reversestring(str);


    return 0;
}

void reversestring(string &str){
    stack<char> stk;
    for(char ch: str) stk.push(ch);
    for(int i = 1; i < str.length(); i++){
        str[i] = stk.top();
        stk.pop();
    }
    
}