#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan tinggi segitiga: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // cetak spasi di depan
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // cetak bintang
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
