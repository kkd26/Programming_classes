// Lesson 6 - 01.10.2020

#include <iostream>

using namespace std;

int fun(int a){ // funkcja rekurencyjna
    if(a < 0) return -1;
    if(a == 0) return 0;
    
    return fun(a-1) + 1;
}

// fun(5) -> fun(4) + 1 -> fun(3) + 1 + 1 -> fun(2) + 1 + 1 + 1 -> fun(1) + 1 + 1 + 1 + 1 -> fun(0) + 1 + 1 + 1 + 1 + 1 -> 0 + 1 + 1 + 1 + 1 + 1 = 5


int main(){
    cout<<fun(-5);
    return 0;
}