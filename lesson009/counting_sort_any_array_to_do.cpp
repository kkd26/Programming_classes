// Lesson 9 - 14.10.2020

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>> n;
    int tab[n];
    
    int m = 0; // max w tablicy tab
    
    for(int i=0 ; i<n ; i++){
        int d;
        cin>>d;
        if(d > m) m = d;
        
        tab[i] = d;
    }
    
    // ------------------------------------------------------------------
    
    int wyn[70] = {0, 0, 0, 0, 0, 0}; //for(int i=0 ; i<100 ; i++) wyn[i] = 0;
    
    for(int i=0; i<n;i++) wyn[tab[i]-1]++; // zliczamy liczby
    
    for(int i=0 ; i<6 ; i++) cout<<wyn[i]<<" "; // wypisanie kubełków
    cout<<"\nPosortowana tablica:\n";
    
    for(int i=0 ; i<6 ; i++){ // iterujemy przez kubełki
        for(int j=0 ; j<wyn[i] ; j++) cout<<i+1<<" ";
    }
    
    
    // wyn[6] ={1, 1, 0, 1, 2, 2}
    // sordted[] = {1, 2, 4, 5, 5, 6, 6}
    
    
    return 0;
}
/*
in:
10
5 1 8 3 7 20 5 100 2 5

out:
1 2 3 5 5 5 7 8 20 100

*/