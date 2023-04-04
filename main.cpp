#include <iostream>
using namespace std;

int palindrom(int a) {
    int aux1, aux2 = 0;
    aux1 = a;
    while (aux1) {
        int c = aux1 % 10;
        aux2 = aux2 * 10 + c;
        aux1 = aux1 / 10;
    }
    if (a == aux2)
        return 1;
    else
        return 0;
}

int main() {
    int n, i, x[100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "x[" << i << "]=";
        cin >> x[i];
    }
    for (i = 0; i < n; i++) {
        x[i] = x[i] * 12;
        if (palindrom(x[i])) {
            x[i] = x[i] / 12;
            cout << "The person has " << x[i] << " years old has the age expressed in months is a palindrome\n";
        }
    }
    return 0;
}
