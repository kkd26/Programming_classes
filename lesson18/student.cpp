// Lesson 18 - 24.11.2020

#include <iostream>
#include <vector>
#include <algorithm>

#include "student.h"

using namespace std;

vector<Student> students;

int main() {
    int T;
    cout<<"Podaj liczbę studentów: ";
    cin>>T;
    
    for(int i=0 ; i<T ; i++){
        Student temp; // wpisz imie i nazwisko
        students.push_back(temp);
    }

    for(int i=0 ; i<T ; i++){
        cout<<"Podaj oceny studenta: "<<students[i].name<<" "<<students[i].surname<<"\n";
        students[i].inputGrades(6);
    }
    
    sort(students.begin(), students.end(), compStudent);
    cout<<"\n";
    for(int i=0 ; i<T ; i++) cout<<students[i].name<<" "<<students[i].avg<<"\n";
    
    return 0;
}
