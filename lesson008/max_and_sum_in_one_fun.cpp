// Lesson 8 - 12.10.2020

#include <iostream>

using namespace std;

int n;

int max_in_tab(int tab[], int &s){
    int m = 0;
    s = 0;
    for(int i=0 ; i<n; i++){
        if(m < tab[i]) m = tab[i];
        s = s + tab[i];
    }
    return m;
}

int main() {
    cin>>n;
    int tab[n];
    for(int i=0 ; i<n ; i++) cin>>tab[i];
    
    int sum;
    
    cout<<"Najwieksza liczba w tablicy "<<max_in_tab(tab, sum)<<"\n";
    cout<<"Najwieksza liczba w tablicy "<<max_in_tab(tab, sum)<<"\n";
    
    cout<<"Suma liczb w tablicy "<<sum<<"\n";
    return 0;
}

/*
in:
5
1 23 4 1 2

out:
Najwieksza liczba w tablicy 23
*/