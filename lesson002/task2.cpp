#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    int s = a%60; // 40
    int m = a/60; // 66m = 1g 6m
    int g = m/60;
    
    m = m%60;
    cout<<g<<"g"<<m<<"m"<<s<<"s";
    
    
    return 0;
}

/*
in:
4000 / 60

out:
1g6m40s

40s = 40s
6m = 6*60 s = 360s
1g = 1*60*60s = 3600s
40 + 360 + 3600 = 4000
*/