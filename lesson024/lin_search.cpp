// Lesson 24 - 15.12.2020

#include <bits/stdc++.h>

using namespace std;

bool niewiem(vector<int> v, int q){
    for(int i=0 ; i<v.size() ; i++) if(v[i] == q) return true;
    return false;
}

bool bin_search(vector<int> v, int q){
    
}


int main(){
    
    vector<int> v = {1,2,4,6,7,10,15,23,24,25,26,27,40,50,100,101,200,301,350}; // 10^18 potrzeba 60 zapytań
    
    int q = 25;
    
    cout<<(niewiem(v, q) ? "znalazłem" : "nie znalazłem");
    
    return 0;
}

/*
192.168.0.1
192.168.0.0
192.168.100.0
192.168.1.1
192.168.1.192
192.168.1.124


192.168.0.34
192.168.100.4

router
192.168.1.1

access point
192.168.1.54
*/

