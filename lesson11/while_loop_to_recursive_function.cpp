//Lesson 11 - 20.10.2020

#include <iostream>

using namespace std;

void cos(int i){
    
    if(i<10) {}
    else return;
    
    cout<<i<<"\n";
    
    cos(i+1);
    return;
}

int main() {
    /*
    int i=0;
    while(i<10){
        cout<<i<<"\n";
        i++;
    }
    */
    
    cos(0);
    
    return 0;
}