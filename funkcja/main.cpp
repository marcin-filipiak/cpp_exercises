#include <stdio.h>
#include <iostream>

using namespace std;

/*
przyklad procedury wyswietlajacej komunikat z wynikiem
funkcja jest typu void poniewaz nie zwraca wartosci
*/
void pokaz_wynik(int wynik){
    cout<<endl<<"wyswietlanie przez procedure"<<endl;
    cout<<"wynik dodawania "<<wynik<<endl;
}

/*
przyklad funkcji sumujacej dwie wartosci i zwrot wyniku
funkcja jest typu int poniewaz zakladamy, ze zwracana wartosc "return c"
bedzie typu int
*/
int dodaj(int a, int b){
    int c = a+b;
    return c;
}

/*
funkcja glowna programu
*/
int main()
{
    //wywolanie funkcji "dodaj" i zapisanie jej dzialania do zmiennej "wynik"
    int wynik = dodaj(10,5);
    
    //wyswietlenie zmiennej wynik
    cout<<"wynik dodawania "<<wynik<<endl;
    
    //wyswietlenie zmiennej wynik za pomoca procedury 
    pokaz_wynik(wynik);
    
    return 0;
}

