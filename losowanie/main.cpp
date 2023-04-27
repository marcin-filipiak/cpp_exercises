// https://cpp0x.pl/kursy/Kurs-C++/Poziom-2/Pseudolosowe-liczby-calkowite/290

#include <iostream>
#include <cstdlib>
int main()
{
    //std::srand(123); //losowanie na podstawie stalej
    std::srand(time(NULL)); //losowanie na podstawie czasu unix epoch https://pl.wikipedia.org/wiki/Czas_uniksowy
    
    
    std::cout<<time( NULL )<<"\n";
    std::cout << "Wylosowanie pierwsze: " << std::rand() << std::endl;
    int liczba = std::rand();
    std::cout << "Wylosowanie drugie: " << liczba << std::endl;
    liczba = std::rand();
    std::cout << "Wylosowanie trzecie: " << liczba << std::endl;
    
    //losowanie reszta z dzielenia
    //https://www.liczebnik.pl/dzielenie-z-reszta.php
    int r = std::rand();
    int l =( r % 2 );
    std::cout<<"random "<<r<<" reszta z dzielenia "<<l<<"\n";
    
    //zakres
    int ile_liczb_w_przedziale = 2;
    int startowa_liczba = 1;
    int wyl = std::rand() % (startowa_liczba - ile_liczb_w_przedziale +1 ) + startowa_liczba;
    std::cout<<"losowanie z zakresu "<< wyl << "\n";
    return 0;
}
