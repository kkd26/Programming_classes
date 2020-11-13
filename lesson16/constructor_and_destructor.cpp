// Lesson 16 - 13.11.2020
#include <iostream>

using namespace std;

//Task 1: stworzyć strukturę o nazwie Point

struct Point{
    int x;
    int y;
    
    //Task 2: wyspiać na ekran informację o stworzeniu punktu, np. "Point was created"
    Point(){ // constructor
        cout<<"Point was created"<<"\n";
        cout<<"Wczytaj point:\n";
        cin>>x>>y;
    }
    
    //Task 3: wyspiać na ekran informację o usunięciu punktu, np. "Point was destroyed"
    ~Point(){ // destructor
      cout<<"Point was destroyed";
    }
};

int main(){
    int a = 10;
    Point p; // uruchomił się constructor
    
    cout<<p.x<<" "<<p.y<<"\n";

    return 0;
}