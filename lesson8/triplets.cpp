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
            for (int k=j+1; k<n; k++){
                int e = tab[k];
                cout<<c<<" "<<d<<" "<<e<<"\n";
                counter++;
            }
        }
    }
    
    cout<<"Jest "<<counter<<" par";
    return 0;
}

/*
in: 
4
1 2 3 4

out:

1 2 3
1 2 4
2 3 4

jest 10 par 

*/