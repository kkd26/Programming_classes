//Lesson 11 - 20.10.2020

#include <iostream>

using namespace std;

void fun(int tab[], int n, int i){
    
    //if(i==n) return; // tab[0], tab[1], .. tab[n-1]
    
    if(i>=n) return;
    
    cout<<tab[i]<<' '; // i=0
    
    fun(tab, n, i+1);
    return;
}

// fan(tab, n, i) -> fun(tab, n, i+1) -> fun(tab, n, i+2) -> fun(tab, n, i+3) -> fun(tab, n, i+4)


int sum(int tab[], int n, int i){
    // tab[] = {5,3,8,4,7,5}
    // n = 6
    // i = 6;
    
    if(i>=n) return 0; // if(6>=6) nie!
    
    return tab[i] + sum(tab, n, i+1); 
}

// sum(tab, n, 0) -> tab[0] + sum(tab, n, 1) -> tab[0] + tab[1] + sum(tab, n, 2) -> tab[0] + tab[1] + tab[2] +...+ tab[5] + 0

int mul(int tab[], int n, int i){
    // tab[] = {5,3,8,4,7,5}
    // n = 6
    // i = 6;
    
    if(i>=n) return 1; // if(6>=6) nie!
    
    return tab[i] * mul(tab, n, i+1); 
}

// mul(tab, n, 0) -> tab[0] * mul(tab, n, 1) -> tab[0] * tab[1] * mul(tab, n, 2) -> tab[0] * tab[1] * tab[2] *...* tab[5] * 1

int main() {
    int tab[] = {5,3,8,4,7,5};
    int n = 6;
    
    fun(tab, n, 0);
    cout<<"\n";
    
    cout<<sum(tab, n, 0)<<"\n";
    cout<<mul(tab, n, 0)<<"\n";
    return 0;
}