/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout<<"podaj a\n";
    
    float a;
    cin>>a;
    
    cout<<"podaj b\n";
    
    float b;
    cin>>b;
    
    if (a==b) {
        cout<<"to jest kwadrat\n";
    }
    else{
        cout<<"to jest prostokat\n";
    }
    
    cout<<"pole "<<a*b;
    

    return 0;
}
