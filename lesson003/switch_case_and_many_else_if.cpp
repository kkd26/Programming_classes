// Lesson 3

#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    switch(n){
        case 0:
            cout<<"zero";
            //break;
        case 1:
            cout<<"jeden";
            //break;
        case 2:
            cout<<"dwa";
            break;
        case 3:
            cout<<"trzy";
            break;
        case 4:
            cout<<"cztery";
            break;
        default:
            cout<<"reszta";
            break;
    }
    
    /*
    if(n==0){
        cout<<"zero";
    }else if(n==1){
        cout<<"jeden";
    }else if(n==2){
        cout<<"dwa";
    }else if(n==3){
        cout<<"trzy";
    }else if(n==4){
        cout<<"cztery";
    }else{
           cout<<"reszta";
    }
    */
 
    return 0;
}