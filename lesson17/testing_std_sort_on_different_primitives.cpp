// Lesson 17 - 17.11.2020

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    // Task 3: sprawdzić czy std::sort działa dla innych typów danych (double, char, string)
    double tabd[8] = {2.3, 2.5, 5.6, 8.1, 5.9, 1.902, -1.4, -9.9};
    char tabc[6] = {'Z','t','a','z','6','2'};
    int tab[14] = {2, 2, 4, 1, 8, 4, 100, 2, 5, 3, 8, 5, 2, 2}; 
    string tabs[6]= {"siema","ok","abs", "aaa", "euq", "aaaa"};
        
    sort(tab, tab+14); // std::sort
    sort(tabd, tabd+8); // działa
    sort(tabc,tabc+6);
    sort(tabs,tabs+6);
    
    //Task 2: wypisać tablicę na ekran, żeby zobaczyć, że jest posortowana
    
    for(int i=0 ; i<14 ; i++) cout<<tab[i]<<" "; // std::cout
    
    cout<<"\n";
    for(auto i : tabd) cout<<i<<" ";
    
    cout<<"\n";
    for(auto i : tabc) cout<<i<<" ";
    
    cout<<"\n";
    for(auto i : tabs) cout<<i<<" ";
    
    return 0;
}