//Lesson 13 - 03.11.2020

#include <iostream>

using namespace std;

int potega(int a,int n){ // potega(10,2) -> a = 10, n = 2
    if (n == 0) return 1;
    return a * potega(a,n-1); // 10 * potega(10,2-1)
}

// a*a*a*a*a*a =
// t = a*a*a 
// t*t

int fastpotega(int a, int n){ // fastpotega(2, 9)
    if (n==0)return 1;
    int x = fastpotega(a,n/2); // fastpotega(2, 4)
    if (n%2 == 1) return x*x*a;
    return x*x;
}

int main(){
    if(potega(2,10) == fastpotega(2,10)){
        cout<<"true";
    }
    
    return 0;
}
// potega(a,0) = a^0 = 

//10 -> 5 -> 2 -> 1 -> 0
//10 -> 9 -> 8 -> 7 -> 6 -> 5 -> 4 -> 3 -> 2 -> 1 -> 0
    
//a^n         = a * a^(n-1)
//potega(a,n) = a * potega(a,n-1)



