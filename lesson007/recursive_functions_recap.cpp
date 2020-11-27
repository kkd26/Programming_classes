// Lesson 7

#include <iostream>

using namespace std;

int counter = 0;

void greetings(string name){
    counter++;
    if(counter > 10) return; // function terminates
    
    cout<<"witaj "<<name<<"\n";
    
    greetings("piotr");
}

int main(){
    
    greetings("krzysiek");
    
    return 0;
}