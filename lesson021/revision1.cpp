// Lesson 21 - 01.12.2020

#include <iostream> 
// include library with cout/cin functions

using namespace std;

int main(){
    int n ;
    //cin >> n ;
    cout << "Hello, world!\n"; // console out
    /*
    int a = 10;
    string b = "eqwe";
    char c = 's';
    long long d = 10000000000000000LL;
    bool e = true;
    float f = 1.2; // floating point
    double g = 1.5;
    
    
    int a; // declaration
    int b = 10; // declaration and initialisaion
    a = 10; // assingment
    
    int c = 10;
    char d('w'); // constructors Student s(name, surname)
    string s{"abcde"};
    */
    int c = 0;
    c--;
    c+=2;
    c = c + 2;
    c*=10;
    c/=30;
    ++c;
    c++;
    
    
    c = 10;
    int d = c++;
    // c = 11, d = 10
    
    c = 10;
    int f = ++c;
    // c = 11, f = 11
    
    cout<< 1000000000LL * 1000000000<<"\n";
    cout << 12345 + 5432L <<"\n";
    cout << 3/2;
    
    
    return 0; // no errors
}