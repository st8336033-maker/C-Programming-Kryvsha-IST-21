#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "napishit tryznachne dodatne chyslo N: ";
    cin >> N;

    if (N < 100 || N > 999) {
        cout << "pohylka: chyslo ne e tryznachnym!" << endl;
        return 1;
    }

    int sotni = N / 100;
    int desiatky = (N / 10) % 10;
    int odynytsi = N % 10;

    int dobutok = 1;
    bool hasEven = false;

    if (sotni % 2 == 0) {
        dobutok *= sotni;
        hasEven = true;
    }
    if (desiatky % 2 == 0) {
        dobutok *= desiatky;
        hasEven = true;
    }
    if (odynytsi % 2 == 0) {
        dobutok *= odynytsi;
        hasEven = true;
    }

    if (hasEven) {
        cout << "dobutok parnykh tsyfr = " << dobutok << endl;
    } else {
        cout << "u tsyflakh chtoho chysla nemae parnykh tsifr." << endl;
    }

    return 0;
}
