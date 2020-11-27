// trzy linijki #ifndef, #define oraz #endif są potrzebne, aby nie było możliwości załączenia dwa razy jednej biblioteki w tym samym projekcie

#ifndef TEST_H // gdy zmienna TEST_H nie została zdefiniowana

#define TEST_H 1 // to definujemy ją oraz całą zawartość pliku

void printHello(){
    std::cout<<"Hello";
}

#endif // koniec if statement