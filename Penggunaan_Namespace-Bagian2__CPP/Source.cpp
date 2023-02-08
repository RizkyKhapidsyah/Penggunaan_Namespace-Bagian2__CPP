#include <iostream>
#include <conio.h>

namespace RizkyKhapidsyah {
    int a = 10;
    int b = 20;

    int add(int x, int y) {
        return x + y;
    }
}

using namespace RizkyKhapidsyah;
using namespace std;

int main() {
    cout << "Nilai 1 = " << a << endl;
    cout << "Nilai 2 = " << b << endl << endl;
    cout << "Hasil   = " << add(a, b) << endl;

    _getch();
    return 0;
}