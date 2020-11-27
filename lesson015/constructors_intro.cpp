#include <iostream>

using namespace std;

struct point{
    string nazwa;
    int d;
    double w;
};

struct Point{
    int x,y;
    Point(){
        x = 3;
        y = 10;
    }
    
    Point(int a, int b){ // a=5, b=-8
        x = a;
        y = b;
    }
    
    Point(int a){
        x = a;
        y = a;
        
    }
    // Task: stwórz constructor, który przyjmuje tylko jeden argument i zapisuje go do x oraz y
};


int main(){
    Point p;
    cout<<p.x<<" "<<p.y<<"\n";
    
    
    Point q(5, 8);
    cout<<q.x<<" "<<q.y<<"\n";
    
    Point w(10);
    cout<<w.x<<" "<<w.y<<"\n";
    
    return 0;
}