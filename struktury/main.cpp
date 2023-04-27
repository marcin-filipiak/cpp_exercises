#include <iostream>

using namespace std;


struct osoba
{
  int waga = 0;
  char imie[20];
};

int main(){

  osoba jan_kowalski;
  
  cout<<"\npodaj imie: ";
  cin>>jan_kowalski.imie;
  cout<<"\nimie osoby to: "<<jan_kowalski.imie;

  osoba szkola[20];
  
  cout<<"\n\npodaj imie pierwszej osoby w dzienniku: ";
  cin>>szkola[0].imie;
  cout<<"\npierwsza osoba w dzienniku ma na imie: "<<szkola[0].imie;

  return 0;
}

