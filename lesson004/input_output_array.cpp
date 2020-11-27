// Lesson 4 - 23.09.2020

#include <iostream>

using namespace std;

int main(){
    
    //int tablica[10] = {10,20,30,40,50,60,70,80,90,100};
    
    //cout<<"Ostatnia liczba w tablicy to: " << tablica[9];
    
    int n;
    cin>>n;
    
    int array[n];
    
    for(int i=0 ; i<n ; i++){
        int d;
        cin>>d;
        array[i] = d; // array[0], array[1], array[2], ... array[n-1]
    }
    
    // cout<<i; // tutaj jest błąd, bo zmienna i nie istnieje
    
    for(int i=0 ; i<n ; i++){
        cout<<array[i]*array[i]<<" ";
    }
    
    return 0;
}

/*
in:
5 -> n
5 1 0 2 9 -> tablica

out:
25 1
*/
