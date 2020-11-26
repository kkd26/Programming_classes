// Lesson 19 - 26.11.2020

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void addNum(int a, vector<int> &w) { // passing vector by reference (without this & character we won't be able to modify vector)

    int n = w.size();
    
    bool isInside = false; // if number a is in vector w
    
    for (int i = 0 ; n>i ; i++){
        if(a == w[i]) isInside = true;
    }
    if (isInside == false) w.push_back(a); // if a wasn't in the vector, then we want to add it
}

void inc(int x){ // pass by value
    x++;
}

void inc2(int & y){ // pass by reference
    y++;
}

int main() {
    int a = 0;
    int &b = a; // this is just different name for variable a
    inc(a); // pass by value
    cout<<a<<" "<<b<<"\n";
    inc2(a); // pass by reference
    cout<<a<<" "<<b<<"\n";
    
    // set = zbiór
    // {4, 6, 1, 7, 2, 8}, {'h', 'w', 'i', 'o'}, {"set", "set1", "yes"}, {true, false}
    
    vector<int> v;
    addNum(10, v);
    addNum(1, v);
    addNum(5, v);
    addNum(1, v);
    addNum(7, v);
    addNum(2, v);
    addNum(8, v);
    addNum(5, v);
    addNum(8, v);
    
    for(int i : v){
        cout<<i<<" ";
    }
    
    return 0;
}