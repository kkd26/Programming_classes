// Lesson 17 - 17.11.2020

#include <iostream>

using namespace std;



int main() {
    int tab[14] = {2,2,4,1,8,4,100,2,5,3,8,5,2,2}; // bucket[2] = 5, bucket[6]=0, ... bucket[100] = 1;
    
    int bucket[200];
    for(int i=0 ; i<200 ; i++) bucket[i] = 0;
    
    // Task 1: napisać pętlę for, która zliczy liczbę wystąpień liczb w tablicy tab
    for (int i=0; i<14; i++){
        bucket[tab[i]]++;
    }
    
    for(int i=0 ; i<200 ; i++){
        for (int j=0; j<bucket[i]; j++){
            cout<<i<<" ";
        }
    }
    return 0;
}