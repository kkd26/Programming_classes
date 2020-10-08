// Lesson 7

#include <iostream>

using namespace std;

int n; // dostępna dla każdego wszędzie

int multiply(int tab[], int i, int size){ // tab[0], tab[1],.. tab[9]
    if (i >= size)
        return 1; // make sure that your recursive functions end

    return tab[i] * multiply(tab, i + 1, size); // we move the index one place to the right
}

int multiply(int tab[]){ // hiding two arguments
    return multiply(tab, 0, n);
}

int main(){
    //int n;
    cin >> n;

    int tab[n];

    for (int i = 0; i < n; i++){
        cin >> tab[i];
    }

    cout << multiply(tab) << "\n";

    // for loop enables us to check the result and its correctness
    int result = 1; // the result
    for (int i = 0; i < n; i++){
        result *= tab[i];
    }
    cout << result;

    return 0;
}
/*
8
5 2 7 2 90 1 5 3
*/
