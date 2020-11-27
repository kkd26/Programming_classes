// Lesson 15 - 10.11.2020

#include <iostream>
#include <vector>

using namespace std;

int main() {
    //int tab[5] = {1,6,2,7,5,6,3,4,6,1,3,8,9,13};
    char c[3] = {'a', 't', 'e'};
    
    cout<<c[0]<<"\n";
    cout<<c[1]<<"\n";
    cout<<c[2]<<"\n";
    cout<<c[100]<<"\n";
    // nie ma c.size()
    
    vector<string> v = {"abc", "def"};
    cout<<v[0]<<"\n";
    cout<<v[1]<<"\n";
    
    v.push_back("nowe słowo"); // {"abc", "def", "nowe słowo"}
    
    cout<<v[2]<<"\n";
    //v.size(); //jest 
    cout<<v[3];
    
    // -Wall -std=c++14 -O2 -o a.out source_file.cpp -fsanitize=address
    
    /*
    vector<int> v(10, 4);
    vector<char> char_vector(20, 'p');
    vector<vector<int> > vv;
    string s = "tekst";
    
    cout<<char_vector.size()<<"\n";
    for(char c : char_vector){
        cout<<c<<" ";
    }
    cout<<"\n";
    for(int i=0 ; i<10 ; i++){
        char_vector.pop_back();
    }
    
    cout<<char_vector.size()<<"\n";
    for(char c : char_vector){
        cout<<c<<" ";
    }
    */
    return 0;
}