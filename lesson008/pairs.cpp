// Lesson 8 - 12.10.2020

#include <iostream>

using namespace std;

int main() {
    int n; // undefined
    cin>>n;
    
    int tab[n]; // tab of size n, with undefined fields
    for (int i=0;i<n;i++){ // loop n times and do something
        cin>>tab[i];
    }
    
    // for(int i=0 ; i<n ; i++) cin>>tab[i];
    
    // input from an user is handled
    for(int i=0 ; i<n ; i++){
        int c = tab[i];
        for(int j=0 ; j<n ; j++){
            int d = tab[j];
            cout<<c<<" "<<d<<"\n";
        }
    }
    return 0;
}

/*
in: 
5
1 2 3 4 5

out:
1 1
2 2
3 3
4 4
5 5
1 2
1 3
1 4
1 5
2 3
2 4
2 5
3 4
3 5
4 5

jest 10 par 

*/