// Lesson 3

#include <iostream>

using namespace std;

int main(){

    //constructors
    
    int n(10); // inny sposób inicjalizacji
    cout<<n<<"\n";
    
    int b{20}; // inny sposób inicjalizacji
    cout<<b<<"\n";
    
    string s(10, '?'); // string o długości 10 wypełniony znakami '?'
    cout<<s;
    
    return 0;
}