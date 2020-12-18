// Lesson 25 - 18.12.2020

#include <bits/stdc++.h>

using namespace std;

bool binSearch(int q, vector<int> v, int s, int e){ // s=0, e=6 mid=3    0 2 3
    int mid = (s+e)/2; // index elementu środkowego, v[mid]
    if(v[mid] == q) return true; // if found
    if(s==e) return false; // if we have only one element left
    if(v[mid]<q) return binSearch(q, v, mid+1, e); // search in right half
    if(v[mid]>q) return binSearch(q, v, s, mid-1); // search in left half
}

int main(){
    vector<int> v = {1,2,4,5,6,7,8,9,10,11,12,13,14,15};
    int n = v.size();
    int q = 3;
    cout<<(binSearch(q, v, 0, n-1) ? "true" : "false");
    
    return 0;
}