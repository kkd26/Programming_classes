// Lesson 3

#include <iostream>

using namespace std;

int main(){
    int height;
    cin >> height;
    
    
    for(int i=0 ; i<height ; i++){
        int liczbaGwiazdek = 2*i + 1;
        int liczbaSpacji = height - 1 - i;
        
        string spacje(liczbaSpacji, ' '); // zamiast pętli for
        string gwiazdki(liczbaGwiazdek, '*');
        
        cout<<spacje<<gwiazdki<<"\n";
    }
    
    return 0;
}