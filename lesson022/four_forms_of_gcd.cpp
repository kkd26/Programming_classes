// Lesson 22 - 04.12.2020

#include <iostream>
#include <numeric> 
//gcd in numeric header in std=c++17

using namespace std;


int gcd(int a, int b){
    while(a != b){
        if(a > b) a = a - b;
        else b = b - a;
    }
    return a;
}

int gcd2(int a, int b){
    if(a == b) return a;
    if(a > b) return gcd2(a - b, b);
    if(b > a) return gcd2(a, b - a);
}

int gcd3(int a, int b){
    if(b == 0) return a;
    if(b > a) swap(a, b); // a is always greater than b
    return gcd3(b, a - b);
}

int gcd4(int a, int b){
    if(b == 0) return a;
    if(b > a) swap(a, b); // a is always greater than b
    return gcd3(b, a % b);
}

int main() {
    cout<<gcd4(2,4)<<"\n";
    
    return 0;
}