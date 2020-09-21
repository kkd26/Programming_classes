// Lesson 3

#include <iostream>

using namespace std;

int main(){
    
    string s("abcdefghijklm");
    /*
    int n = s.size();
    for(int i=0 ; i<n ; i++){
        cout<<s[i]<<"\n";
    }
    */

    for(int c : s){ // for auto
        cout<<c<<"\n";
    }
    
    return 0;
}