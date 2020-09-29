//Lesson 5

#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size(); // 0, 1, 2, 3, 4, ..., (n-2), (n-1)
    int j = n-1; // ostatni indeks
    
    bool czyJestPalindromem = true;
    
    for (int i = 0; i < n ; i++){ // for idzie od przodu do tyłu
        if(s[i] != s[j]){ // wiemy, że to nie jest palindrom
            czyJestPalindromem = false;
        }
        j--; // indeks się zmniejsza od tyłu do przodu
    }
    
    if(czyJestPalindromem){
        cout<<"TAK";
    }else{
        cout<<"NIE";
    }
        
    return 0;
}

/*
kajbk != kbjak
12321
aaaa
*/