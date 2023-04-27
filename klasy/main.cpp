/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class samochod {
  public:
    int rocznik = 1970;
    char marka[20];
    
    //konstruktor nie ma typu, może być kilka konstruktorow w klasie
    samochod(){
        cout << "\nstworzono samochod";
    }
    
    //destruktor nic nie zwraca
    ~samochod(){
        cout <<"\nskaskowano samochod";
    }
    
    void samochod_def_marka(){
        cout << "\npodaj marke: ";
        cin >> marka;
    }
    
    void samochod_pokaz(){
        cout<<"\nmarka: "<<marka;
        cout<<"\nrocznik: "<<rocznik;
    }
};

int main()
{
    //jeden obiekt
    samochod s1;
    s1.samochod_def_marka();
    s1.samochod_pokaz();
    
    //tablica obiektow 
    samochod firmowe[10];

    return 0;
}
