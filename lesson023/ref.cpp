#include <iostream>

using namespace std;

int main(){
    int a = 0;
    int &b = a;
    b = 1;
    cout<<a<<" "<<b;
    b = 2; // a = 2, b = 2

    return 0;
}