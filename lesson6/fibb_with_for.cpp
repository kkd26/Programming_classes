// Lesson 6 - 01.10.2020

#include <iostream>

using namespace std;



int main(){    
    int x,y=1,z=1;
    cin>>x;
    cout<<1<<" "<<1<<" ";
    
    for(int i = 1; i<=x-2; i++){
        int temp;
        
        temp = y;
        y = y + z;
        z = temp;
        
        cout<<y<<" ";
    }
    
    return 0;
}

/*
1 1 2 3 5 8 13 21 34 55 89 ...

fib(3) -> 2
fib(10) -> 55
fib(10) = fib(9) + fib(8)

*/