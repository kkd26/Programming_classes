#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    // a = a + 1;
    a += 1; // -> a = a + 1
    a += 10;
    a *= 10; // a = a * 10;
    a /= 10; // a = a / 10;
    a -= 10; 
    a++; // a += 1, a = a + 1;
    cout<< a;
    
    return 0;
}

/*
in:
10

out:
11
*/