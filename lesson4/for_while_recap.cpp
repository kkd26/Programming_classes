// Lesson 4 - 23.09.2020

#include <iostream>

using namespace std;

int main(){
    /*
    for(int i=1; i<=50; i++){
        if(i*3 >= 50){
            break;
        }
        cout<<3*i<<" ";
    }
    */
    int i = 0;
    
    while(3*i < 50){
        cout << 3*i << " ";
        i++;
    }

    return 0;
}

/*
out:
1 4 9 16 25 36 49 64 81 100 ... 2500
*/