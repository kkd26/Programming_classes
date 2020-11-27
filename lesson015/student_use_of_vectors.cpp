// Lesson 15 - 10.11.2020

#include <iostream>
#include <vector>

using namespace std;

/**
 * Liczenie średniej ocen w vektorze v, gdzie n to liczba ocen
 * @param n liczba ocen/wiekość tablicy
 * @param tab tablica ocen/liczb całkowitych
 **/
double calAvg(vector<int> v){
    int n = v.size();
    double sum = 0.0;
    for(int i=0 ; i<n ; i++){
        sum += v[i];
    }
    return sum/n;
}

// Task 1: dodać vektor ocen w strukturze student

struct Student{ // struktura - structure
    string name; // pola w strukturze - fields
    string surname;
    double avg = 0;
    // int grades[n];
    vector<int> grades;
    
};


int main() {
    Student piotr; // zmienna o nazwie "piotr" typu Student
    cin>>piotr.name;
    cin>>piotr.surname;
    
    int n;
    cin>>n;
    
    for(int i=0 ; i<n ; i++){
        int ocen;
        cin>>ocen;
        piotr.grades.push_back(ocen);
    }
    
    cout<<"Imie: "<<piotr.name<<"\n";
    cout<<"Nazwisko: "<<piotr.surname<<"\n";
    cout<<"Oceny: ";
    for(int i=0 ; i<n ; i++) cout<<piotr.grades[i]<<" ";
    cout<<"\n";
    cout<<"Srednia: "<<calAvg(piotr.grades)<<"\n";
    
    return 0;
}
/*
jan
nowak
5
1 6 4 2 5

-Wall -std=c++14 -O3 -static -o a.out source_file.cpp
*/