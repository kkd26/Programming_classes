// Lesson 20 - 27.11.2020

#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>

using namespace std;

void addNum(int a, vector<int> &w) { // passing vector by reference (without this & character we won't be able to modify vector)

    int n = w.size();
    
    bool isInside = false; // if number a is in vector w
    
    for (int i = 0 ; n>i ; i++){
        if(a == w[i]) isInside = true;
    }
    
    if (isInside == false) w.push_back(a); // if a wasn't in the vector, then we want to add it "a" 
}

bool doesExist(int a, set<int> &z){
    // [z.begin()] [z.begin()+1] [z.begin()+2] [] [z.end()-1] z.end()
    if(z.find(a) != z.end()){ // jeżeli indeks liczby a w secie z nie jest równy z.end(), czyli a znajduje się w secie
        // integer a is in the set z
        cout<<"Hurra znalazłem liczbe "<<a<<"\n";
        return true;
    }else { //  if(z.find == z.end())
        cout<<"Niestety się nie udało znaleźć "<<a<<"\n";
        return false;
    }
}

int main() {
    
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
    
    cout<<"vector: ";
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    // n - długość tablicy
    // lg n 
    
    // set = zbiór
    // {1, 2, 4, 6, 7, 8}, {'h', 'i', 'o', 'w'}, {"set", "set1", "yes"}, {false, true}
    
    set<int> s;
    s.insert(10);
    s.insert(1);
    s.insert(5);
    s.insert(1);
    s.insert(7);
    s.insert(2);
    s.insert(8);
    s.insert(5);
    s.insert(8);
   
    cout<<"set: ";
    for(int i : s) cout<<i<<' ';
    cout<<"\n";
    
    doesExist(10, s);
    doesExist(11, s);
    doesExist(5, s);
    doesExist(4, s);
    doesExist(3, s);
    doesExist(7, s);
    
    // sort(tab, tab+n);
    // sort(v.begin(), v.end());
    
    if(s.find(5) != s.end()){ //delete 5 from the set
        s.erase(s.find(5));
    }
    
    
    s.erase(s.find(5)); // invialid
    
    
    cout<<"\nset_modified: ";
    for(int i : s) cout<<i<<' ';
    cout<<"\n";
    
    return 0;
}
   