#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a; // 10
    //int b = a++; // 1. przypisanie obecnej wartości a do b    2. zwiększenie wartości a o 1
    int b = ++a; // 1. zwiększenie wartości a o 1    2. przypisanie obecnej wartości a do b
    
    cout<<a<<" "<<b;
    
    
    return 0;
}

/*
in:
10

out:
11
*/