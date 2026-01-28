#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Введіть два числа: ";
    cin >> a >> b;

    cout << "Сума = " << a + b << endl;
    cout << "Різниця = " << a - b << endl;
    cout << "Добуток = " << a * b << endl;

    if (b != 0) {
        cout << "Частка = " << a / b << endl;
    } else {
        cout << "Ділення на нуль неможливе" << endl;
    }

    return 0;
}