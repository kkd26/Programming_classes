// Lesson 9 - 14.10.2020

#include <iostream>

using namespace std;

int main() {
   
    tab[7] = {6, 4, 1, 5, 2, 5, 6};
    
    
    int wyn[6] = {0, 0, 0, 0, 0, 0}; //for(int i=0 ; i<100 ; i++) wyn[i] = 0;
    
    for(int i=0; i<7;i++){
        /*
        for(int j=1 ; j<=6 ; j++) if(tab[i]==j) wyn[j-1]++;
            
        if(tab[i]==1) wyn[0]++;
        if(tab[i]==2) wyn[1]++;
        if(tab[i]==3) wyn[2]++;
        if(tab[i]==4) wyn[3]++;
        if(tab[i]==5) wyn[4]++;
        if(tab[i]==6) wyn[5]++;
        */
        
        wyn[tab[i]-1]++;
    }
    
    
    // wyn[6] ={1, 1, 0, 1, 2, 2}
    
    
    return 0;
}