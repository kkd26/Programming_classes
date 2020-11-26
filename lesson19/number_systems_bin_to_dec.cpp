// Lesson 19 - 26.11.2020

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int bin_to_dec(string b){
    // "110101" b[0], b[1], ...,  b[n-1]
    int n = b.size();
    
    int pot = 1; // pierwsza potęga, czyli 2^0 = 1
    
    int wynik = 0;
    
    for(int i = n-1 ; i>=0 ; i--){
        char c = b[i]; // albo '1' albo '0'
        if (c == '1'){
            wynik += 1*pot;
        }else if (c == '0'){
            wynik += 0*pot;
        }
        pot*=2; // pot = pot*2;
    }
    return wynik;
}

int main() {
    
    cout<<bin_to_dec("111111111111111111111111111111111"); // za duże na int (maksymalnie 31 jedynek)
    
    
    // 000100111010010010110 - system binarny / binary system / system dwójkowy
    
    // decimal system: {0,1,2,3,4,5,6,7,8,9}
    /*
        123 = 3   + 20   + 100
        123 = 3*1 + 2*10 + 1*100
        123 = 3*(10^0) + 2*(10^1) + 1*(10^2)
        
        4273 = 3        + 70       + 200      + 4000
        4273 = 3*(10^0) + 7*(10^1) + 2*(10^2) + 4*(10^3)
    */
    
    // binary system: {0,1}
    /*
        101_2 = 1 + 00 + 100
        101_2 = 1*(2^0) + 0*(2^1) + 1*(2^2)
        101_2 = 1       + 0       + 4 = 5_10
        
        101 _2  =  5 _10
        
        110101 = 1*(2^0) + 0*(2^1) + 1*(2^2) + 0*(2^3) + 1*(2^4) + 1*(2^5)
        110101 = 1       + 0       + 4       + 0       + 16      + 32 =
               = 53
               
        110101 _2 = 53 _10
    */
    
    // hexadecinal: {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}
    /*
        (16)     (10)
        A     =   10 
        F     =   15
        D     =   13
        
        E4    =  4*(16^0) + E*(16^1) = 4*(16^0) + 14*(16^1) = 4 + 224 = 228
        FF    =  255 = 15 + 15*16
    */
    
    return 0;
}