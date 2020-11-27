// Lesson 8 - 12.10.2020

#include <iostream>

using namespace std;

int counter = 0;
int n; // undefined
int k;

void znajdz(int tab[], int inx[], int i){
    if(i<0) return;
    if(i==k-1){
        for(int i=0 ; i<k ; i++) cout<<tab[inx[i]]<<" ";
        cout<<"\n";
        counter++;
        if(inx[i]+1 < n){
            inx[i]++;
            znajdz(tab, inx, i);
        }else znajdz(tab, inx, i-1);
    }else{
        if(inx[i]+1 < inx[i+1] && inx[i]+k-i < n){
            inx[i]++;
            for(int j=i+1 ; j<k ; j++) inx[j] = inx[j-1] + 1;
            znajdz(tab, inx, k-1);
        }else znajdz(tab, inx, i-1);
    }
    
    return;
}

void wypisz_grupy(int tab[], int k){
    int inx[k];
    for(int i=0 ; i<k ; i++) inx[i]=i;
    znajdz(tab, inx, k-1);
}

int main() {
    cin>>n;
    int tab[n]; // tab of size n, with undefined fields
    for(int i=0 ; i<n ; i++) cin>>tab[i];

    cin>>k;
    
    // input from an user is handled
    
    wypisz_grupy(tab, k);
   
    cout<<"Jest "<<counter<<" grup k elementowych";
    return 0;
}

/*
in:
7
1 2 3 4 5 6 7
5

out:
1 2 3 4 5
1 2 3 4 6
1 2 3 4 7
1 2 3 5 6
1 2 3 5 7
1 2 3 6 7
1 2 4 5 6
1 2 4 5 7
1 2 4 6 7
1 2 5 6 7
1 3 4 5 6
1 3 4 5 7
1 3 4 6 7
1 3 5 6 7
1 4 5 6 7
2 3 4 5 6
2 3 4 5 7
2 3 4 6 7
2 3 5 6 7
2 4 5 6 7
3 4 5 6 7
Jest 21 grup k elementowych
*/