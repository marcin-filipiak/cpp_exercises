/******************************************************************************

Program rysuje okrąg w konsoli o promieniu r na obrazie kwadratowym rozm

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

int r = 10;
int rozm = 40;

std::cout.precision(2);

for (int y=0;y<rozm;y++){
    cout << endl;
    for (int x=0;x<rozm;x++){
        //przesuniecie punktu 0,0 o promień okręgu
        double yy = y+1-r-1;
        double xx = x+1-r-1;

        //obliczanie z pitagorasa odległości punktu od 0,0
        double odl = sqrt(xx*xx+yy*yy);

        //jeśli odległość mieści się w promieniu to jest to w okręgu
        if (odl<=r){
            cout<<"*";
        }
        else {
            cout<<".";
        }
        
    }
}

}
