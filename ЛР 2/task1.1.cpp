#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    cout << "vvedit znachennia x ";
    cin >> x;

    if (x >= 0) {
        y = exp(-x + 2);
    } else {
        if (abs(x + 3.2) < 1e-9) {
            cout << "pomylka dilennia na 0" << endl;
            return 1;
        }
        y = exp(-x) * sin(1.0 / (x + 3.2));
    }

    cout << "Rezultat y = " << y << endl;

    return 0;
}
