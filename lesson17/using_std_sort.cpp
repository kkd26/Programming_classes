// Lesson 17 - 17.11.2020

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int tab[14] = {2,2,4,1,8,4,100,2,5,3,8,5,2,2};
    
    sort(tab, tab+14); // std::sort
    
    //Task 2: wypisać tablicę na ekran, żeby zobaczyć, że jest posortowana
    for(int i=0; i<14;i++) cout<<tab[i]<<" "; // std::cout
    
    return 0;
}