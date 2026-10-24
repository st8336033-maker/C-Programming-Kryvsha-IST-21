#include <iostream>
#include <cmath>

using namespace std;

int main() {
    system("chcp 65001 > nul");

    double a = 2.0;
    double b = 19.03;
    double y = 0.0;

    const double PI = acos(-1.0);

    double numerator = 4.3 * sin((a / b + 1.0) * PI);

    double exponent = 1.0 - cos((a / b - 1.0) * PI);

    double denominator = pow(b / a, exponent) + log(b);

    if (denominator == 0) {
        cout << "error: division by zero" << endl;
    } else {
        y = numerator / denominator;

        cout << "input data:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "------------------------" << endl;
        cout << "calculation result у = " << y << endl;
    }

    return 0;
}
