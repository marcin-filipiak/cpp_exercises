#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    fstream plik;
    
    /*
    ios::in	    Open for input operations.
    ios::out	Open for output operations.
    ios::binary	Open in binary mode.
    ios::ate	Set the initial position at the end of the file.
    If this flag is not set, the initial position is the beginning of the file.
    ios::app	All output operations are performed at the end of the file, appending the content to the current content of the file.
    ios::trunc	If the file is opened for output operations and it already existed, its previous content is deleted and replaced by the new one.
    */
    plik.open( "dane.txt", ios::out );
    int x = 20;
    plik << "tekst do pliku \n"<<x<<"\n";
    plik.close();
    getch();
    return( 0 );
}
