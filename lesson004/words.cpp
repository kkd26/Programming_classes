// Lesson 4 - 23.09.2020

#include <iostream>

using namespace std;

int main(){
    int il;
    cout<<"ile ma być słów:\n";
    cin>>il;
    
    string slowa[il], s;
    
    cout<<"Podaj "<<il<<" słów:\n\n";
    
    for (int i=0; i<il; i++){
        cin>>s;
        slowa[i] = s;
    }
    
    cout<<"Pojdałeś następujące słowa:\n\n";
    
    for (int i=0; i<il; i++){
        cout<<slowa[i]<<" ";
    }
    
    cout<<"\n\nIch długości to:\n\n";
    
    for (int i=0; i<il; i++){
        cout<<slowa[i].size()<<" ";
    }
    
    cout<<"\n\nSłowo najdłuższe:\n";
    
    string tns = "";
    int tdns = 0;
    
    for(int i=0; i<il; i++){
        if(tdns < slowa[i].size()){
            tdns = slowa[i].size();
            tns = slowa[i];
        }
    }
    
    cout<<tns;
    
    return 0;
}

/*
in:
5
abc wejklakjsd owee qp 1
*/