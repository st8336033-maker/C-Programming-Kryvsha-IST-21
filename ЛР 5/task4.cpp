#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double eps = 0.001;
    double x = 1.0; 
    double x_prev;
    int iter = 0;
    do {
        x_prev = x;
        x = 2.304 * log(x_prev) / 1.5773;
        iter++;
    } while (abs(x - x_prev) > eps && iter < 1000);

    cout << "Korin rivniannia = " << x << endl;
    cout << "Kilkist iteratsiy = " << iter << endl;

    return 0;
}
