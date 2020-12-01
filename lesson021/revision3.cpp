// Lesson 21 - 01.12.2020

#include <iostream>
#include <algorithm>

using namespace std;

struct Point{
    // fields
    int x;
    int y; 
    
    //constructors
    Point(): x(0), y(0) {} 
    
    Point(int a, int b){
        x = a;
        y = b;
    }
    
    Point(int a): x(a), y(a) {}
    
    // methods
    void print(){
        cout<<"Point{x="<<x<<",y="<<y<<"}\n";
    }
    
} p1, p2; //Point p1, p2;

bool compPoint(Point &a, Point &b){
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int main() {
    Point p3(1,3);
    p3.print();
    
    Point tab[10];
    sort(tab, tab + 10, compPoint); // std::sort, quick sort
    
    return 0;
}