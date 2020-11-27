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

long long iloczyn(long long a, long long b){
    if(b<0) return -iloczyn(a, -b);
    
    if(b==0) return 0L;
    return a + iloczyn(a, b-1);
}

int ilo(int a, int b){
    return a*b;
}

//    a * b     = a + a*(b-1)
// iloczyn(a,b) = a + iloczyn(a, b-1) = a + a + iloczyn(a,b-2) = a + a + a + iloczyn(a, 1)
//iloczyn(a,1) = a
// a+a+a+a+a...

//a+a+a+a+a+a -> 5 znaków dodawania

//t = a+a+a; - > 2 znaki dodawania
//t+t -> 1 znak dodawania
// 3


// a+a+a+a+a

// t = a+a
// t+t+a

long long fast_multiply(long long a, long long b){
    if(b<0) return -fast_multiply(a, -b);
    if(b==0) return 0L;
    
    long long t = fast_multiply(a, b/2);
    if(b%2==0) return t+t;
    return t+t+a;
}

//a*a*a*a*a = a^n


int main(){
    long long n = 99419411092480;
    long long m = 1874289412;
    
    long long wynik = fast_multiply(n, m);
    cout<<wynik; // -8259074703273603072
    // czas: 1.62s (iloczyn), 0.16s (fast multiply), czyli widać, że fast_multiply jest dużo szybszy od iloczyn
    return 0;
}