#include <iostream>

using namespace std;

int main() {
    int day;
    cout << "Vvedit nomer dnia tyzhnia (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Ponedilok: Pohlyblene navchannya hrafichnykh symulyatsiy, Prohramuvannya  C++" << endl;
            break;
        case 2:
            cout << "Vivtorok: Informatsiyni merezhi, Prohramuvannya  C++" << endl;
            break;
        case 3:
            cout << "Sereda: Pohlyblene navchannya hrafichnykh symulyatsiy, Vyshcha matematyka, Anhliysʹka mova" << endl;
            break;
        case 4:
            cout << "Chetver: Fizychne vykhovannya" << endl;
            break;
        case 5:
            cout << "P'iatnytsia: -" << endl;
            break;
        case 6:
        case 7:
            cout << "Vykhidnyy den', pary vidsutni." << endl;
            break;
        default:
            cout << "Pohylka: vvedeno nevyrnyy nomer dnia (treba vid 1 do 7)." << endl;
    }

    return 0;
}
