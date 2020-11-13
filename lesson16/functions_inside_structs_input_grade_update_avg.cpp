// Lesson 16 - 13.11.2020

#include <iostream>
#include <vector>

using namespace std;

// Task 1: dodać vektor ocen w strukturze student

struct Student{ // struktura - structure
    string name; // pola w strukturze - fields
    string surname;
    double avg = 0.0;
    vector<int> grades;
    
    Student(){ // default contructor
        cout<<"Podaj imie oraz nazwisko:\n";
        cin>>name>>surname;
    }
    
    Student(string a, string b){ // another constructor
        name = a;
        surname = b;
    }
    
    // Task 4: przenieść funkcję calAvg() do struktury
    void updateAvg(){
        int n = grades.size();
        double sum = 0.0;
        for(int i=0 ; i<n ; i++){
            sum += grades[i];
        }
        
        avg = sum/n;
    }
    
    // Task 3: napisać funkcję, która wczyta jedną ocenę od użytkownika oraz doda ją do vectora 'grades'
    void inputGrade(){
        int g;
        cin>>g;
        grades.push_back(g);
        // Task 5: po wczytaniu oceny oraz wrzuceniu jej do vectora, chcemy, żeby średnia się zaktualizowała
        updateAvg();
    }
};

int main() {
    Student piotr;
    
    int n;
    cin>>n;
    
    for(int i=0 ; i<n ; i++){
        piotr.inputGrade();
    }
    
    cout<<"Imie: "<<piotr.name<<"\n";
    cout<<"Nazwisko: "<<piotr.surname<<"\n";
    cout<<"Oceny: ";
    for(int i=0 ; i<n ; i++) cout<<piotr.grades[i]<<" ";
    cout<<"\n";
    cout<<"Srednia: "<<piotr.avg<<"\n";
    
    piotr.inputGrade();
    cout<<"Srednia: "<<piotr.avg<<"\n";
    piotr.inputGrade();
    cout<<"Srednia: "<<piotr.avg<<"\n";
    piotr.inputGrade();
    cout<<"Srednia: "<<piotr.avg<<"\n";
    piotr.inputGrade();
    cout<<"Srednia: "<<piotr.avg<<"\n";
    piotr.inputGrade();
    cout<<"Srednia: "<<piotr.avg<<"\n";
    
    return 0;
}

/*
jan
nowak
5
1 6 4 2 5
6
1
5
6
3
*/