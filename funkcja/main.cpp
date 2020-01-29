/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int dodaj(int a, int b){
    int c = a+b;
    return c;
}

int main()
{
    int wynik = dodaj(10,5);
    cout<<"wynik dodawania "<<wynik;
    return 0;
}
