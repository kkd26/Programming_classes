// Lesson 25 - 18.12.2020

#include <bits/stdc++.h>

using namespace std;

vector<int> prefTab(vector<int> v){
    vector<int> r;
    r.push_back(0);
    int sum = 0;
    for(int i=0 ; i<v.size() ; i++){
        sum +=v[i];
        r.push_back(sum);
    }
    return r;    
}

int query(vector<int> v, const int &a, const int &b){
    int r = 0;
    for(int i=a ; i<=b ; i++){
        r = r + v[i]; // r+=v[i]
    }
    return r;
}

ostream& operator<<(ostream &os, const vector<int> &v){
    os<<"{";
    for(int i=0 ; i<v.size()-1 ; i++) os<<v[i]<<",";
    os<<v[v.size()-1];
    os<<"}\n";
    return os;
}

int main(){
    vector<int> v = {2,5,7,2,4,6,3,5,1,8,10,2,4,5,2};
    cout<<v;
    vector<int> s = prefTab(v);
    cout<<s;
    //s = {0,2,7,14,16,20,26,29,34,35,43,53,55,59,64,66} - tablica prefiksowa
    // s[0], s[1], .. s[n] size=n+1
    // s[i] = v[0]+v[1]+...+v[i-1]
     
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int a, b;
        cin>>a>>b;
        cout<<query(v, a, b)<<"\n";
    }
    
    return 0;
}
/*
10
1 3
2 4
1 6
4 6
3 5
2 2
6 8
3 7
1 14
1 14
1 14
1 14
3 6
*/
