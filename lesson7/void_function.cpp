// Lesson 7

#include <iostream>

using namespace std;

void greetings(string name){ // we use void functions when we don't need a return statement

    cout<<"witaj "<<name<<"\n";
}

int main(){
    
    greetings("krzysiek"); // it has only side effects
    
    return 0;
}