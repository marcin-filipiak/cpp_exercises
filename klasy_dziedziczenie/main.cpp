/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Zwierze
{
        public:
             void jedz(){
                 cout<<"\nzjadam";
             }
};

class Ptak : public Zwierze
{
    public:
         void lec(){
             cout<<"\nlatam";
         }
};

class Ryba : public Zwierze
{
    public:
         void plyn(){
             cout<<"\nplywam";
         }
         
};

class ptakoryb : public Ryba, public Ptak
{
    public:
         int zz;
         
};

int main()
{
    ptakoryb pr;
    pr.plyn();
    pr.lec();
    pr.Ryba::jedz();

    return 0;
}