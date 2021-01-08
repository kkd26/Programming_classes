// Lesson 27 - 08.01.2021

#include <bits/stdc++.h>

using namespace std;

vector<int> prefTab(vector<int> v) {
    vector<int> r;
    r.push_back(0);
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        r.push_back(sum);
    }
    return r;
}

// Task 1. Convert back from prefTab to input Tab
vector<int> convertBack(vector<int> s) { // r[i] = s[i+1] - s[i]
    vector<int> r;

    for (int i = 0; i < s.size() - 1; i++) {
        r.push_back(s[i + 1] - s[i]);
    }

    return r;
}

int query(const vector<int>& v, const int& a, const int& b) {
    int r = 0;
    for (int i = a - 1; i < b; i++) {
        r = r + v[i]; // r+=v[i]
    }
    return r;
}

int fastQuery(const vector<int>& s, const int& a, const int& b) {
    return s[b] - s[a - 1];
}

ostream& operator<<(ostream& os, const vector<int>& v) {
    os << "{";
    for (int i = 0; i < v.size() - 1; i++) os << v[i] << ",";
    os << v[v.size() - 1];
    os << "}\n";
    return os;
}

int main() {
    vector<int> v = { 2,5,7,2,4,6,3,5,1,8,10,2,4,5,2 };
    cout << v;
    vector<int> s = prefTab(v);
    cout << s;
    //s = {0,2,7,14,16,20,26,29,34,35,43,53,55,59,64,66} - tablica prefiksowa
    // s[0], s[1], .. s[n] size=n+1
    // s[i] = v[0]+v[1]+...+v[i-1]
    // s[i+1] = v[0]+v[1]+...+v[i-1]+v[i] 
    // s[i+1] = s[i] + v[i]

    // v[i] = s[i+1] - s[i]

    //preprocessing

    cout << convertBack(s);

    // a b
    // v[a-1] + v[a] + ... v[b-2] + v[b-1]

    // 1 3
    // v[0] + v[1] + v[2]

    // 6 8
    // v[5] + v[6] + v[7]

    // 10 11
    // v[9] + v[10]


    // v[0], v[1], v[2], v[3], v[4], v[5]
    // 1.    2.    3.    4.    5.    6.

    // 3 5
    // v[2] + v[3] + v[4]

    // 2 6
    // v[1] + v[2] + v[3] + v[4] + v[5]

    // v[0] + v[1] + v[2] + v[3] + v[4] + v[5]

    // 3 3
    // v[2]

    // 4 5
    // (v[0] + v[1] + v[2] + v[3] + v[4]) - (v[0] + v[1] + v[2])
    //                s[5]                -         s[3]

    // 3 3
    // v[2] = (v[0] + v[1] + v[2]) - (v[0] + v[1]) = s[3] - s[2]

    // a b
    // v[a-1] + v[a] + ... v[b-2] + v[b-1] = s[b] - s[a-1]

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cout << query(v, a, b) << " " << fastQuery(s, a, b) << "\n";
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
