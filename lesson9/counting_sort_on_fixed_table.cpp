// Lesson 9 - 14.10.2020

#include <iostream>

using namespace std;

int main() {
   
    int tab[7] = {6, 4, 1, 5, 2, 5, 6};
    
    int wyn[6] = {0, 0, 0, 0, 0, 0}; //for(int i=0 ; i<100 ; i++) wyn[i] = 0;
    
    for(int i=0; i<7;i++) wyn[tab[i]-1]++; // zliczamy liczby
    
    for(int i=0 ; i<6 ; i++) cout<<wyn[i]<<" "; // wypisanie kubełków
    cout<<"\nPosortowana tablica:\n";
    
    for(int i=0 ; i<6 ; i++){ // iterujemy przez kubełki
        for(int j=0 ; j<wyn[i] ; j++) cout<<i+1<<" ";
    }
    
    
    // wyn[6] ={1, 1, 0, 1, 2, 2}
    // sordted[] = {1, 2, 4, 5, 5, 6, 6}
    
    return 0;
}