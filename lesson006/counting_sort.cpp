// Lesson 6 - 01.10.2020

#include <iostream>

using namespace std;

int main(){
    int x; // liczba ocen, 
    cin>>x; // wczytanie liczby ocen
    
    int y[x]; // lista ocen
    
    for(int i=0;i<x;i++){ // wczytanie wszystkich ocen
        cin>>y[i]; // wczytanie jednej oceny na konkretne pole
    }
    
    // Wczytywanie zakończone
    
    int z[6] = {0,0,0,0,0,0};
    
    for(int i=0;i<x;i++){
        if(y[i]==1){
            z[0]++;
        }
          if(y[i]==2){
            z[1]++;
        }
          if(y[i]==3){
            z[2]++;
        }
          if(y[i]==4){
            z[3]++;
        }
          if(y[i]==5){
            z[4]++;
        }
          if(y[i]==6){
            z[5]++;
        }
    }
    
    for(int i: z) cout<<i<<" ";
    //for(int i=0 ; i<6 ; i++) cout<<z[i]<<" ";
    
    return 0;
}

/*
in:
7
6 4 4 5 1 5 2

out:
1 1 0 2 2 1
*/
