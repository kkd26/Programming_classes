// Lesson 3

#include <iostream>

using namespace std;

int main(){
    int height;
    cin >> height;  
    
    for(int i=0 ; i<height ; i++){
        int liczbaGwiazdek = 2*i + 1;
        int liczbaSpacji = height - 1 - i;
        
        for(int j=0 ; j < liczbaSpacji; j++){
            cout<<' ';
        }
        for(int j=0 ; j < liczbaGwiazdek; j++){
            cout<<'*';
        }
        cout<<"\n";
    }
    
    return 0;
}