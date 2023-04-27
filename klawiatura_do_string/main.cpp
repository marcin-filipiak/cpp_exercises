// https://www.geeksforgeeks.org/problem-with-getline-after-cin/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst;
    int x;
    
    cout << "\npodaj liczbę";
    cin >> x;
    cout << x;
    cout << (char)x;
    
    cout << "\nwpisz zdanie";
    getline(cin >> ws,tekst);
    cout << tekst;
    
    cout << "\npodaj liczbe";
    cin >> x;
    cout << x;
   
   
    return( 0 );
}
