#include <iostream>

using namespace std;

int main() {
    int n;
    unsigned long long silnia = 1;

    cout << "Podaj liczbe: ";
    cin >> n;

    if (n < 0) {
        cout << "Nie mozna obliczyc silni dla liczb ujemnych!" << endl;
    } else {
        for (int i = 2; i <= n; i++) {
            silnia *= i;
        }
        cout << "Silnia z " << n << " wynosi " << silnia << endl;
    }

    return 0;
}
