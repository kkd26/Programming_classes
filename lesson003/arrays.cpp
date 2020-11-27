// Lesson 3

#include <iostream>

using namespace std;

int main(){
    /*
    [1, 2, 3, 4, 5, 6] - array of integers
    ['a', 'b', 'c', 'd'] - array of characters
    [false, true, true, false] - array of booleans
    [1,2,3,1,2,3,3,3,3,2,1,-1,10] - bigger array of integers (both positive and negative)
    ["asdasd", "asdasd","qrwrqr"] - array of strings
    */
    
    int tab1[5] = {100,200,300,400,500}; // with values [100,200,300,400,500] -> tab1[0], tab1[1], tab1[2], tab1[3], tab1[4]

    int tab[5]; // wihtout values
   
    
    for(int i=0 ; i<5 ; i++){ // input an array
        /*
        int n;
        cin>>n;
        tab[i] = n;
        */
        cin>>tab[i];
    }
    // array if filled out
    // [10, 20, 30, 40, 50]
    
    for(int i=0 ; i<5 ; i++){ // output the array
        cout<<tab[i]<<" ";
    }
    return 0;
}