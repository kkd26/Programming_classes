// Lesson 22 - 04.12.2020

#include <iostream>

using namespace std;

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
   assign 1 to x
    
    for loop i from 0 to n
      begin
        assign x*a to x
      end
      
    return x
  end
*/

int main() {
    
    cout<<pow(2, 10);
    
    return 0;
}

/*
Task 1: Write fast powering (or normal powering)
a^n = a*a* ... *a

*/