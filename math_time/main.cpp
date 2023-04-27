#include <stdio.h>
#include <iostream>
#include <cmath>
#include <ctime>

//dodawanie
int dodaj(int a, int b){
    int wynik = a + b;
    return wynik;
}

//losowanie z zakresu
int losowanie(int nmin, int nmax){
    return rand() % (nmax - nmin + 1) + nmin;
}

//pierwiastek dowolnego stopnia
double root(double x, double a){
    return pow(x, 1/a);
}

using namespace std;
int main()
{
    //std::cout<<dodaj(2,1)<<std::endl;
    //std::cout<<pow(2.23,2)<<std::endl;
    //std::cout<<sqrt(16)<<std::endl;
    //std::cout<<root(16,2)<<std::endl;
    //std::cout<<sin(30)<<std::endl;
    //std::cout<<(rand()%100+1)<<std::endl;
    //std::cout<<time(NULL)<<std::endl;
    srand(time(NULL));
    std::cout<<losowanie(10, 100)<<std::endl;
    cout<<"zaokraglenie standardowe"<<round(3.3)<<endl;
    cout<<"zaokraglenie zawsze w gore"<<ceil(3.3)<<endl;
    cout<<"zaokraglenie zawsze w dol"<<floor(3.3)<<endl;
    
    return 0;
}

