// Lesson 3

#include <iostream>

using namespace std;

int main(){
    /*
    [1, 2, 3, 4, 5, 6]
    ['a', 'b', 'c', 'd']
    [false, true, true, false]
    [1,2,3,1,2,3,3,3,3,2,1,-1,10]
    ["asdasd", "asdasd","qrwrqr"]
    */
    
    int tab1[5] = {100,200,300,400,500}; // z wartościami [100,200,300,400,500] -> tab1[0], tab1[1], tab1[2], tab1[3], tab1[4]

    int tab[5]; // bez wartości
   
    
    for(int i=0 ; i<5 ; i++){ // wczytanie tablicy
        /*
        int n;
        cin>>n;
        tab[i] = n;
        */
        cin>>tab[i];
    }
    // tablica jest wypeniona
    // [10, 20, 30, 40, 50]
    
    for(int i=0 ; i<5 ; i++){ // wypisanie tablicy
        cout<<tab[i]<<" ";
    }
    return 0;
}