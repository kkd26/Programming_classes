//Lesson 5

#include <iostream>

using namespace std;

int main(){
    string s; // "slowo" = ['s', 'l', 'o', 'w', 'o']  string to jest tablica charów
    cin >> s;
    
    int n = s.size(); // długość tej tablicy
    
    while(s[n-1] == '0'){ //usuwanie zer z końca
        n--;
    }
    
    for(int i = n-1; i>=0 ; i--){ // for od tyłu, wypisywanie od tyłu
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