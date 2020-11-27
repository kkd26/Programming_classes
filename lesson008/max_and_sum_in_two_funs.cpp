// Lesson 8 - 12.10.2020

#include <iostream>

using namespace std;

int n;

int max_in_tab(int tab[]){
    int m = 0;
    for(int i=0 ; i<n; i++){
        if(m < tab[i]) m = tab[i];
    }
    
    return m;
}
int sum_in_tab(int tab[]){
    int f=0;
    for (int i =0;i<n;i++){
        f = f+tab[i];
    }
    return f;
}


int main() {
    cin>>n;
    int tab[n];
    for(int i=0 ; i<n ; i++) cin>>tab[i];
    
    cout<<"Najwieksza liczba w tablicy "<<max_in_tab(tab)<<"\n";
    cout<<"Suma liczb w tablicy "<<sum_in_tab(tab)<<"\n";
    return 0;
}

/*
in:
5
1 23 4 1 2

out:
Najwieksza liczba w tablicy 23
*/