// Lesson 22 - 04.12.2020

#include <iostream>

using namespace std;


int fastPow(int a, int n){
    if(n == 0) return 1;
    else{
        int x = fastPow(a, n/2);
        if(n%2 == 0) return x*x;
        else return x*x*a;
    }
}

/* alternative implementation
int fastPow(int a, int n){
    if(n == 0) return 1;
    int x = fastPow(a, n/2);
    x*=x;
    if(n%2 != 0) x*=a;
    return x;
}
*/
        
     
/*
function fastPow(a,n)
  begin
    if n is 0
      begin
        return 1
      end
    else
      begin
        assign fastPow(a, n/2) to x
        if n is even
          begin
            return x*x
          end
        else
          begin
            return x*x*a
          end
      end
  end
*/

int pow(const int a, const int n){
    int x = 1;
    
    for(int i=0 ; i<n ; i++) x*=a;

    return x;
}
/*
function pow(a, n):
    x := 1
    for i in 0...n:
        x *= a
        
    return x
    
function pow(a, n)
  begin
    x := 1
    
    for i in 0...n 
      begin
        x *= a
        
        
      end
    return x
  end
  
function pow(a, n)
  begin
   assign 1 to x // int x = 1;
    
    for loop i from 0 to n
      begin
        assign x*a to x // x *= a;
      end
      
    return x
  end
*/

int main() {
    
    cout<<pow(2, 10)<<"\n";
    cout<<fastPow(2, 10)<<"\n";
    
    return 0;
}

/*
Task 1: Write fast powering (or normal powering)
a^n = a*a* ... *a

*/