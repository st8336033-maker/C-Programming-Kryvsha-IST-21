#include <iostream>
#include <cmath>

using namespace std;

int main() {
      double x, y;

    cout << "Vvedit koordinatu x: ";
    cin >> x;
    cout << "Vvedit koordinatu y: ";
    cin >> y;

    bool inTriangle = (x >= 0) && (y >= 0) && (y <= 1.0 - x);

    bool inCircleQuarter = (x <= 0) && (y <= 0) && ((x * x + y * y) <= 1.0);

    if (inTriangle || inCircleQuarter) {
        cout << "Tochka potraplyaye v oblast." << endl;
    } else {
        cout << "Tochka ne potraplyaye v oblast." << endl;
    }

    return 0;
}
