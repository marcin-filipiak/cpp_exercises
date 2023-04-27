#include <iostream>

using namespace std;

int zmien(int *w1, int *w2) {
    *w1 = *w1 + *w1;
    *w2 = *w2 + *w2;
    return 0;
}

int main()
{
    int rok = 2000;    
    int *w = &rok;    //wskaźnik w zawiera adres zmiennej rok
    cout << "wartość zmiennej przez wskaźnik: " << *w << " wartość zmiennej:" << rok << endl;
    cout << "adres zmiennej: " << w <<" lub "<< &rok << endl;
    cout << "adres wskaznika: " << &w << endl << endl;
    
    //modyfikacja zmiennej przez wskaznik
    *w = 1984;
    cout << "wartość zmiennej: " << rok << endl << endl;
    
    //-----typ float--------------------
    float cena = 2.6;    
    float *c = &cena;    //wskaźnik c zawiera adres zmiennej cena
    cout << "wartość: " << *c << " adres zmiennej: " << c << endl;
    
    //-----typ char--------------------
    char znak = 'c';    
    char *z = &znak;    //wskaźnik z zawiera adres zmiennej znak
    cout << "wartość: " << *z << " adres zmiennej: " << z << endl << endl;
    //uwaga cout nie wyswietli adresu zmiennej char - wynika to z implementacji tej funkcji
    
    //-----wskaznik generyczny---------
    int wiek = 23;    //zmienna liczbowa
    void *wsk = &wiek; //wskaźnik generyczny wsk typu void
    *(int*)wsk = 24;   //modyfikacja wartosci
    cout << *(int*)wsk << endl; //wyswietlenie
    
    //----wskaznik do funkcji----------
    int zma = 11;
    int zmb = 44;
    zmien(&zma, &zmb);
    cout << zma << " " << zmb;
    
    
    return 0;
}
