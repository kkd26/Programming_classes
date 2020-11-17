// Lesson 17 - 17.11.2020

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Person{
    string name;
    string wyglad;
    double height;
    int age;
    bool is_male;
    
    Person(string name, string wyglad, double height, int age, bool is_male){
        this->name = name;
        this->wyglad = wyglad;
        this->height = height;
        this->age = age;
        this->is_male = is_male;
    }
};

void wypisz(Person p){
    cout<<"Name: "<<p.name;
    cout<<"\nwyglad: "<<p.wyglad;
    cout<<"\nheight: "<<p.height;
    cout<<"\nage: "<<p.age;
    cout<<"\nis_male?: "<<p.is_male;
    cout<<"\n--------------\n";
}

bool compAge(Person p1, Person p2){
    // Task 4: return true jeżeli p1 jest młodszy od p2
    
    if (p1.age < p2.age)return true;
    else return false;
    
    /*
    if (p1.age < p2.age)return true;
    return false;
    */
    
    /*
    return p1.age < p2.age ? true : false;
    */
    
    /*
    return p1.age < p2.age;
    */
}

// Task 5: napisać comparator, który posortuje po imionach

bool compName(Person p1, Person p2){
    return p1.name < p2.name;
}


bool compRev(int a, int b){
    return a > b;
}

int main() {
    
    Person a("Tom", "przystojny", 1.95, 35, true);
    Person b("Oliwia", "blondynka", 1.63, 25, false);
    Person c("Adam", "gruby", 1.75, 19, true);
    
    Person tab[3] {a,b,c};
    sort(tab, tab+3, compName);
    
    for(auto i : tab) wypisz(i);
    return 0;
}