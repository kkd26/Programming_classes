// Lesson 6 - 01.10.2020

#include <iostream>

using namespace std;

int factorial(int x){
    int y=1;
    for(int i =1; i<= x; i++){ // i = 1, 2, 3, 4, ..., x
        y = y*i;
    }
    return y;
}

int factorial2(int x){
    if(x==0) return 1;
    return x * factorial2(x-1);
}

int main(){
    
    cout<<factorial(5)<<"\n";
    cout<<factorial(10)<<"\n\n";
    cout<<factorial2(5)<<"\n";
    cout<<factorial2(10)<<"\n\n";
    
    return 0;
}

/*
5! = 5*4*3*2*1 = 120
4! = 4*3*2*1 = 24
0! = 1
*/
