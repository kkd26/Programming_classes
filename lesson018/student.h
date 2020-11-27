#ifndef STUDENT_H
#define STUDENT_H 1

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
    
    void inputGrades(int n){
        for(int i = 0 ; i<n ; i++) inputGrade();
    }
};

bool compStudent(Student &a, Student &b){
    if(a.avg > b.avg) return true;
    else return false;
}

#endif