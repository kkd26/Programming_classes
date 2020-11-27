// Lesson 15 - 10.11.2020

#include <iostream>

using namespace std;

/**
 * Liczenie średniej ocen w tablicy tab, gdzie n to liczba ocen
 * @param n liczba ocen/wiekość tablicy
 * @param tab tablica ocen/liczb całkowitych
 **/
double calAvg(int n, int tab[]){
    double sum = 0.0;
    for(int i=0 ; i<n ; i++){
        sum += tab[i];
    }
    return sum/n;
}

struct Student{ // struktura - structure
    string name; // pola w strukturze - fields
    string surname;
    double avg = 0;
    int grades[];
};


int main() {
    Student piotr;
    cin>>piotr.name;
    cin>>piotr.surname;
    
    int n;
    cin>>n;
    int tab[n];
    for(int i=0 ; i<n ; i++) cin>>tab[i];
    
    cout<<"Imie: "<<piotr.name<<"\n";
    cout<<"Nazwisko: "<<piotr.surname<<"\n";
    cout<<"Oceny: ";
    for(int i=0 ; i<n ; i++) cout<<tab[i]<<" ";
    cout<<"\n";
    cout<<"Srednia: "<<calAvg(n, tab)<<"\n";
    
    return 0;
}