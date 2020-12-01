// Lesson 21 - 01.12.2020

#include <iostream>

using namespace std;

int main(){
    int a = 10, b =5;
    
    if (a == b) cout<<"true";
    else if (a != 0){ 
        cout<<"cos";
        cout<<"cos innego";
    }
    else cout<<"false";
    for(int i=0 ; i<10 ; i++){
        cout<<i<<"\n";
    }
    
    a = 0;
    while(a < 10){
        cout<<a<<"\n";
        a++;
    }
    
    for(;;){
        if(a<10){
            cout<<a<<"\n";
            a++;
        }else{
            break;
        }
    }
    
    int a[5] = {2,10,4,1,6};
    int m = 0; // a candidate for max
    int sum =0;
    for(int i=0 ; i<5 ; i++){
        if(a[i] > m) m = a[i]; // update our candidate
        
        if(i!=0){
            sum+=a[i];
        }
    }
    cout<<m;
    cout<<sum;

    cout<<a[2];
    
    for(int i : a){ // for auto
        cout<<i<<" ";
    }
    
    for(char c : "abcs"){
    
    }
    
    return 0;
}