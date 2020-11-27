// Lesson 20 - 27.11.2020

#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>

using namespace std;

//Task: write a function which takes a string as an agument and returns number of distinct letters in it
// "abdcdbabcdabcdba" -> 4 a b c d
int distinct (string a) {
    int n = a.size();
    
    // create an empty set
    set<char> s;
    
    for(int i=0; i<n; i++){
        // insert into the set
       s.insert(a[i]);
    }
    for(char c : a) s.insert(c); // marnujemy czas, nie psujemy programu
    
    // check the set's length
    
    // cout letters from the set
    for(char c : s) cout<<c<<" "; 
        
    
    return s.size();
}

int main() {
    cout<<distinct("abdcdbabcdabcdba");
    set<int> s1;
    set<char> s2;
    set<string> s3;
    
    sort(tab, tab+n, compStu);
    
    set< set<int>, compSetInt> s4;
    set<Student, compStu> s5;
    
    return 0;
}
   