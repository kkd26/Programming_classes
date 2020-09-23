#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    int n = s.size(); // the length of the string

    while(s[n-1]=='0' && n!=1) n--; // skip zeros (s[n-1] is a tail)

    for(int i=n-1 ; i>=0 ; i--){ // reverse for loop
       cout<<s[i]; 
    }
    
    return 0;
}