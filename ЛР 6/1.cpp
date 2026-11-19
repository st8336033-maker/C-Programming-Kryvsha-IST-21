#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Vvedit naturalne chyslo N: ";
    cin >> N;

    int sum = 0;
    int temp = N;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit < 7) {
            sum += digit;
        }
        temp /= 10;
    }

    cout << "Suma tsyfr menshykh za 7 = " << sum << endl;

    return 0;
}
