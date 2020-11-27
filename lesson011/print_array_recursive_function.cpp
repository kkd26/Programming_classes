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

    
void sum(int a, int b){ cout<<a+b;}

int main() {
    int tab[] = {5,3,8,4,7,5};
    int n = 6;
    
    fun(tab, n, 0);
    
    return 0;
}