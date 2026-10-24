#include <iostream>

using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 25; i++) {
        sum += i * i;
    }

    cout << "Suma kvadrativ vid 1 do 25- " << sum << endl;

    return 0;
}
