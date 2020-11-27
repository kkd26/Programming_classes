//Lesson 14 - 06.11.2020
#include <iostream>

using namespace std;

double calAvg(int n, int tab[]){
    double sum = 0.0;
    for(int i=0 ; i<n ; i++){
        sum += tab[i];
    }
    return sum/n;
}

// Task 1: napisać strukturę Student z polami name, surname, avg

struct Student{
    string name;
    string surname;
    double avg = 0;
};


int main() {
    // Task 2: wczytać name, surname jakiegoś Studenta
    Student piotr; // zmienna o nazwie "piotr" typu Student
    cin>>piotr.name;
    cin>>piotr.surname;
    
    // Task 3: wczytań n ocen, gdzie n jest podane przez użytkownika
    int n;
    cin>>n;
    int tab[n];
    for(int i=0 ; i<n ; i++) cin>>tab[i];
    
    //Task 4: napisać funkcję, która z listy ocen zwraca ich średnią - calAvg
    
    cout<<"Imie: "<<piotr.name<<"\n";
    cout<<"Nazwisko: "<<piotr.surname<<"\n";
    cout<<"Oceny: ";
    for(int i=0 ; i<n ; i++)cout<<tab[i]<<" ";
    cout<<"\n";
    cout<<"Srednia: "<<calAvg(n, tab)<<"\n";
    
    return 0;
}

/*
in:
Adam
Kowalski
6
4 2 6 5 5 3
*/