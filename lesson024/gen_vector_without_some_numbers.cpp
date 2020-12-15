// Lesson 24 - 15.12.2020

#include <bits/stdc++.h>


using namespace std;

vector<long long> create(){
    vector<long long> v;
    for(long long i=0 ; i<100000 ; i++){
        const int r = rand()%3;
        if(r!=0){
            v.push_back(i);
        }
    }
    return v;
}

ostream& operator<<(ostream &os, const vector<long long> &v){
    for(int i : v) os<<i<<", ";
    return os;
}

int main(){
    srand(time(0));
    vector<long long> v = create();
    cout<<v;
    
    return 0;
}