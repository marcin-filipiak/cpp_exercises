#include <iostream>

using namespace std;

int main()
{
    int n;
    int suma = 0;

    cout << "Zaczynam od zera.\nPodaj liczbe do ktorej bedzie wykonywana suma liczb parzystych: ";
    cin >> n;

    for (int i = 0; i <= n; i += 2) {
        suma += i;
    }

    cout << "Suma liczb parzystych od 0 do " << n << " wynosi " << suma << endl;


    return 0;
}
