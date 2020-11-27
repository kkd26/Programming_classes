// Lesson 3

#include <iostream>

using namespace std;

int main(){
    int n; // 20
    cin >> n;
    long long silnia = 1LL;
    for(int i = 0 ; i < n; i++){ // 0, 1, 2, 3, 4 , ... , n-1 
        silnia = silnia * (i+1);
    }
    cout<<silnia;
    
    return 0;
}

/*
in:
4

out:
4! = 24


a b c
a c b
b a c
b c a
c a b
c b a
3! = 6
    
_ _ _
3*2*1 = 3! = 6     
*/