// Lesson 3

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    /*
    for(int i= 1; i<n; i *= 2){
        cout<<i<<"\n";
    }
    */
    
    int pot = 1;
    
    while(pot < n){ // until the power is smaller than n, then we execute the loop:
        cout<<pot<<"\n";
        pot *= 2;
    }
    
    
    return 0;
}


/*
in: 
567000

out:
765

in:
123

out:
321

s.size();

*/