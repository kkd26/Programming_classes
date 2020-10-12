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
    
    int counter = 0;
    
    // input from an user is handled
    for(int i=0 ; i<n ; i++){
        int c = tab[i];
        for(int j=i+1 ; j<n ; j++){
            int d = tab[j];
            cout<<c<<" "<<d<<"\n";
            counter++;
        }
    }
    
    cout<<"Jest "<<counter<<" par";
    return 0;
}

/*
in: 
5
4 10 3 5 3

tab[0] = 4
tab[1] = 10
tab[2] = 3

out:

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