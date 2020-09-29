//Lesson 5

#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int tab[n];
    
    for(int i=0; i < n; i++ ){
        // int d;
        // cin>>d;
        // tab[i] = d;
        cin>>tab[i];
    }
    
    for (int i = 0; i < n ; i+=2 ){
        cout<<tab[i]<<" ";
    }
    
    cout<<"\n";
    
    for (int i = 1; i < n ; i+=2 ){
        cout<<tab[i]<<" ";
    }
    

    
        
    return 0;
}

/*
in:
6
1 2 3 4000 5 6

out:
1 3 5
2 4000 6
*/