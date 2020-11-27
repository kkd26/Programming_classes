// Lesson 9 - 14.10.2020

#include <iostream>

using namespace std;

void fun(int a[]){
    a[0]++;
}

int main() {
    int a[1] = {1};
    
    fun(a);
    
    cout<<a[0];
    
    return 0;
}