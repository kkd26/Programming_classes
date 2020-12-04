// Lesson 22 - 04.12.2020

#include <iostream>

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

// Task: write a functions which swaps two numbers
/* swapNum(a, b) // 1, 2
    b = a // 1, 1
    a = b
*/
void swapNum(int &a, int &b){
    const int temp = b; // value of our previous b
    b = a;
    a = temp;
}


int main() {
    int a = 1;
    int b = 2;
    swap(a, b);
    cout<<a<<" "<<b<<"\n"; // 2 1
    
    
    cout<<gcd(2,4)<<"\n";
    cout<<gcd(20,16);
    
    return 0;
}