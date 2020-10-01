// Lesson 6 - 01.10.2020

#include <iostream>

using namespace std;


double Abs(double x){ // x = -10
    if(x < 0){
        x = -x; //x = 0 - x; //x -= 2*x; // x *= -1;
    }
    
    return x;    
}


int main(){
    
    cout<<abs(-10)<<"\n"; // int
    cout<<abs(2)<<"\n"; // int
    
    cout<<abs(-1.45)<<"\n"; // double
    
    return 0;
}

// abs(2) = 2
// abs(-10) = 10