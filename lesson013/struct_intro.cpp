//Lesson 13 - 03.11.2020

#include <iostream>

using namespace std;

struct Mebel{
    string name; // nazwa np. krzesło
    int a; // wysokość
    int b; // szerokość
    int c; // długość
    double price; // cena
};

struct Point{
    int x;
    int y;
} p1, p2; //Point p1, p2;

int main(){
    Mebel pierwszy_mebel, trzeci_mebel;
    
    pierwszy_mebel.name = "krzesło";
    pierwszy_mebel.a = 10;
    pierwszy_mebel.b = 20;
    pierwszy_mebel.c = 5;
    pierwszy_mebel.price = 5.5;
    
    Mebel drugi_mebel;
    
    drugi_mebel.name = "łóżko";
    drugi_mebel.a = 100;
    drugi_mebel.b = 50;
    drugi_mebel.c = 20;
    drugi_mebel.price = 199.99;
    
    return 0;
}
