// Lesson 7

#include <iostream>

using namespace std;

void fun(int &a){ // pass by reference (we can change modify variable from another scope)
    a++;
}

void fun2(int b){ // pass by value (creating a new variable with the same value)
    b--;
}
    
int main(){
    int n = 10;
       
    int &b = n; // reference, another name for the same variable
    
    n++; // increment of n and b
    b++; // increment of n and b
    
    cout<<n; // is equal to 12
    
    return 0;
}

