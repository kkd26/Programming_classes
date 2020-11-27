// Lesson 3

#include <iostream>

using namespace std;

int main(){
    int ileRazy, numer = -1, s;
    
    cin >> ileRazy; // 4
    
    s = ileRazy; // s ma dostac wartość 4
    
    for(int i=1 ; i<=ileRazy ; i++){ // pętla - loop - for loop
        numer = numer + 2;
        s = s-1; 
        
        for(int j=1 ; j<=s ; j++){ // wypisanie spacji
            cout<<' ';
        }
    
        for(int j=1; j<=numer ; j++){
            cout<<'*';
        }
        cout<<"\n";
    }
    return 0;
}

/*

   *      1 
  ***     3 
 *****    5 
*******   7  

*/