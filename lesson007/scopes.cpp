// Lesson 7

#include <iostream>

using namespace std;

int a = 9; // this value exists everywhere, but it can be overload when we declare different variable in different scope

int fun(){
    int a = 10; // this value exists only in fun()
    
    cout<<a<<"\n";
    
    return 0;
}
 
    
int main(){
    int a = 8; // this value exists only in main()
    fun();
    cout<<a;
    return 0;
}

/*
{// global
    a = 9
    {// main
        a = 8
        {// fun
            a = 10
        }
        
    }
}
*/

