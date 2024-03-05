#include <iostream>
#include <cstdlib>
#include <ctime>
#include "hello_world.h"
using namespace std;

void randomdata(int n, int dane[]){
    // ustawienie czasu na aktualny czas do generowania 'swiezych' danych
    srand(time(NULL));
    for(int i = 0; i<n; i++){
        dane[i] = rand() % n + 1;
    }
}
void insertionsort(int n, int dane[]){
    for(int i=1; i<n; i++){
        int key = dane[i];
        int j=i-1;
        while(j>=0 && dane[j]>key){
            dane[j+1] = dane[j];
            j=j-1;
        }
        dane[j+1] = key;
    }
}
void printlist(int n, int dane[]){
    for(int i = 0; i<n; i++){
        cout << dane[i] << " "; 
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Podaj wartosc zmiennej 'n' do zakresu tablicy liczb losowych od 1 do 'n': \n";
    cin >> n;
    int tab[n], wyn[n];
    randomdata(n, tab);
    printlist(n, tab);
    cout << "\nInsertion sort:\n";    
    insertionsort(n, tab);
    printlist(n, tab);
    return 0;
}