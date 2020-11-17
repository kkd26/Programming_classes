// Lesson 17 - 17.11.2020

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{ 
    string name;
    string surname;
    double avg = 0.0;
    vector<int> grades;
    
    Student(){
        cout<<"Podaj imie oraz nazwisko:\n";
        cin>>name>>surname;
    }
    
    Student(string a, string b){
        name = a;
        surname = b;
    }
    
    void updateAvg(){
        int n = grades.size();
        double sum = 0.0;
        for(int i=0 ; i<n ; i++){
            sum += grades[i];
        }
        
        avg = sum/n;
    }
    
    
    void inputGrade(){
        int g;
        cin>>g;
        grades.push_back(g);
        updateAvg();
    }
};

vector<Student> students;

int main() {
    int T;
    cout<<"Podaj liczbę studentów: ";
    cin>>T;
    
    for(int i=0 ; i<T ; i++){
        Student temp;
        students.push_back(temp);
    }
    
    return 0;
}