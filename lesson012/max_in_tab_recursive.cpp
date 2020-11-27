//Lesson 12 - 23.10.2020

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int find_max(int a[], int n, int i){
    if(i >= n) return INT_MIN;
    
    int pozostala = find_max(a, n, i+1);
    int obecna = a[i];
    
    if(obecna > pozostala) return obecna;
    else return pozostala;
}

int main(){
    int tab[] = {4,6,1,4,1,5,1,2};
    int m = find_max(tab, 8, 0);
    cout<<m;
    
    return 0;
}