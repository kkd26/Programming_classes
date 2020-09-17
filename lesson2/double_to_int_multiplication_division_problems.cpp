#include <iostream>

using namespace std;

int main(){
    
    // int a = 0.5; // zaokrąglane w dół 0.99999999 -> 0, 0.11111 -> 0
    // cout<<a; // 0
    
    cout << 1 + 2 << "\n";
    cout << 1 - 2 << "\n";
    cout << 1 * 2 << "\n";
    cout << 1 / 2  << "\n";
    cout << 1.0 / 2  << "\n";
    int a = 1000000000;
    int b = 1000000000;
    cout << 1LL * a * b << "\n"; // 10^18
    
    
    cout << 1000000000LL * 1000000000  << "\n"; // 10^18
    
    return 0;
}
