#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int rx = 10; //rozmiar obrazu X
    int ry = 10; //rozmiar obrazu Y
    int t[ry][rx]; //tablica z obrazem
    int r = 3; //promien okregu
    
    //czyszczenie obrazu
    for (int y=0; y<ry; y++){
        for (int x=0; x<rx; x++){
            t[y][x] = 0;
        }
    }
    
    //stawianie piksela
    //t[2][1] = 1;
    
    //zaznaczanie srodka
    int sy = ry/2; //srodek Y
    int sx = rx/2; //srodek X
    t[sy][sx] = 1;
    
    //rysowanie okregu
    for (int y=0; y<ry; y++){
        for (int x=0; x<rx; x++){
            float d = sqrt(pow(x-sx,2)+pow(y-sy,2));
            if (d<=r){
                t[y][x] = 1;
            }
        }
    }
    
    
    //wyswietlanie obrazu
    for (int y=0; y<ry; y++){
        for (int x=0; x<rx; x++){
            cout<<t[y][x];
        }
        cout<<endl;
    }

    return 0;
}

