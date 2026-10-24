#include <iostream>
#include <cmath>

using namespace std;

int main() {
      double a, b, h;

    cout << "Vvedit pochatok vidrizku a: ";
    cin >> a;
    cout << "Vvedit kinec vidrizku b: ";
    cin >> b;
    cout << "Vvedit krok h: ";
    cin >> h;

    cout << "______________" << endl;
    cout << ":  X  :  Y  :" << endl;
    cout << "______________" << endl;

    double x = a;
    while (x <= b + 1e-9) {
        if (x < 0) {
            cout << ": " << x << " : Pomylka :" << endl;
          } else {
            double y = pow(x, 0.75) + 6.0;
            cout << ": " << x << " : " << y << " :" << endl;
          }
        x += h;
    }
    cout << "________________" << endl;

    return 0;
    }
