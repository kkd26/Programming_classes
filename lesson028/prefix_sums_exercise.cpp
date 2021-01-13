// Lesson 28 - 13.01.2021

#include <iostream>

using namespace std;


int main() {
    int n, t; // długość ogrodu oraz liczba zapytań
    string s; // ogród
    cin >> n; // wczytywanie
    cin >> s;
    cin >> t;

    //"NRNNRNN"

    // 1. Gdy dokładamy literkę R, to nie zmieniamy nieporządku
    // 2. Gdy dokładamy literkę N, to zwiększamy nieporządek o liczbę literek R w obecnym ciągu

    int r[n + 1];
    r[0] = 0;
    int w = 0;

    int pref[n + 1]; // nieporządki dla każdego prefixu ogrodu, czyli pref[7] = nieporządek dla kwiatów od 1 do 7

    pref[0] = 0;

    for (int i = 0; i < n; i++) {
        char c = s[i]; // obcny symbol kwatu (N, R)
        if (c == 'R') {
            r[i + 1] = r[i] + 1;
        }
        else {
            r[i + 1] = r[i];
            w += r[i + 1];
        }
        pref[i + 1] = w; // wystarczy jedna linijka, żeby policzyć nieporządki dla dowolnego prefixu ogrodu
    }

    // NRNRNNNRRRR RNNNRNR RNNNRNRN
    //pref[1] = 0, dla i=0
    //pref[2] = 0, dla i=1
    //pref[3] = 1, dla i=2
    //pref[4] = 1, dla i=3
    //pref[5] = 3, dla i=4
    //pref[10] = 7, dla i=9

    int a;
    int b;
    for (int i = 0;i < t;i++) {
        cin >> a >> b; // wczytywanie dwóch liczb
        cout << pref[b] - pref[a - 1] - (b - a + 1 - r[b] + r[a - 1]) * (r[a - 1]) << "\n";
    }

    return 0;
}