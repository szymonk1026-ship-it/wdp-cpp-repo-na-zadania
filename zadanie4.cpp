#include <iostream>
using namespace std;

int main() {
    int sekundy;
    cin >> sekundy;

    int minuty = sekundy / 60;
    int reszta = sekundy % 60;

    cout << minuty << endl;
    cout << reszta << endl;

    return 0;
}
