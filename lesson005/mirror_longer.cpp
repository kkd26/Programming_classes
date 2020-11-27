//Lesson 5

#include <iostream>

using namespace std;

int main(){
    string s; // "slowo" = ['s', 'l', 'o', 'w', 'o']
    cin >> s;
    
    int n = s.size(); // 5
    
    bool x = false; // boolean := false, true np. bool x = flase

    for(int i = n-1 ; i>=0 ; i--){ // 7605000
        if(s[i] != '0'){
            x = true;
        }
        
        else if (s[i] == '0' && x != true){
            continue;
        }
       
        cout<<s[i];
    }
    
        
    return 0;
}


/*
in:
123

out:
321

in:
765000

out:
567
*/