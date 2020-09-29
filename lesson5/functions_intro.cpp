//Lesson 5

#include <iostream>

using namespace std;

string suma(string a, string b){
    return a+b;
}

int suma(int a, int b){
    return a*b;
}


int main(){
    
    cout << suma("1", "2") << "\n";
    cout << suma(1, 2) << "\n";
        
    return 0;
}