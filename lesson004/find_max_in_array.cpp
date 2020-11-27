// Lesson 4 - 23.09.2020

#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int tab[n];
    
    for(int i=0 ; i<n ; i++) cin>>tab[i];
    
    int tmp = 0; // tymczasowa maksymalna
    
    for(int i=0 ; i<n ; i++){
        if(tab[i] > tmp){
            tmp = tab[i];
        }
    }
    
    cout<<tmp;
    
    return 0;
}

/*
in:
5
47 9 27 100 4

out:
100
*/