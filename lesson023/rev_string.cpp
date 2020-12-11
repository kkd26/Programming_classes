#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s{"abcd"};
    int n = s.size();
    reverse(s.begin(), s.end());

    vector<int> v;
    reverse(v.begin(), v.end());

    cout<<s;

    return 0;
}