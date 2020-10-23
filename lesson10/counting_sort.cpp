// Lesson 10 - 16.10.2020

#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cin>> n;
    int tab[n];
    
    int m = INT_MIN; // tymczasowy max w tablicy tab
    
    cout<<"Wejsściowa tablica:\n";
    
    for(int i=0 ; i<n ; i++){
        int d;
        cin>>d; // cin>>tab[i];
        cout<<d<<" ";
        if(d > m) m = d; // sprawdzenie maxa
        
        tab[i] = d;
    }
    
    // ------------------------------------------------------------------
    
    int buckets[m]; 
    for(int i=0 ; i<m ; i++) buckets[i] = 0;
    
    for(int i=0 ; i<n ; i++) buckets[tab[i]-1]++; // zliczamy liczby
    
    // for(int i=0 ; i<m ; i++) cout<<buckets[i]<<" "; // wypisanie kubełków
    cout<<"\nPosortowana tablica:\n";
    
    for(int i=0 ; i<m ; i++){ // iterujemy przez kubełki
        for(int j=0 ; j<buckets[i] ; j++) cout<<i+1<<" ";
    }
    
    return 0;
}
/*
in:
10
5 1 8 3 7 20 5 100 2 5

out:
1 2 3 5 5 5 7 8 20 100
*/