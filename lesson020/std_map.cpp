// Lesson 20 - 27.11.2020

#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 4;
    char tab[n] = {'g', 'r', 'w', 'y'};
    // tab[0] = 'g'
    // tab[2] = 'w'
    
    map<char, int> m;
    // m['g'] = 0;
    // m['r'] = 1;
    // m['w'] = 2;
    // m['y'] = 3;
    
    // Task: zrobić automatyczne dodanie literek do mapy
    for(int i =0; i<n;i++){
        m[tab[i]] = i;
    }
    // m.find('a') -> m.end()
    // m.size()
    
    // m['y'] = 3
    // m['r'] = 1
    
    map<string, double> m1;
    
    // m1["name"] = 1.32
    // m1["hello world"] = 7.8
    
    return 0;
}
   