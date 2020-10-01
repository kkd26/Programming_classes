// Lesson 6 - 01.10.2020

#include <iostream>

using namespace std;

int fib(int a){ // a = 0
    if(a == 0){
        return 0;
    }
    
    if(a == 1){
        return 1;
    }
    
    return fib(a-1) + fib(a-2);
} 

// fib(1) -> 1
// fib(2) -> 1

// fib(4) -> fib(3)+fib(2) -> fib(2) + fib(1) + fib(2) -> fib(1) + fib(0) + fib(1) + fib(1) + fib(0) -> 3

// fib(10) -> fib(9) + fib(8) -> fib(8) + fib(7) + fib(8)

int main(){   
    int n;
    cin>>n;
    cout<<fib(n);
    
    return 0;
}

/*
1 1 2 3 5 8 13 21 34 55 89 ...

fib(0) -> 0
fib(1) -> 1
fib(3) -> 2
fib(10) -> 55
fib(10) = fib(9) + fib(8)

*/