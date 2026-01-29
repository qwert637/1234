#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Введіть a і b: ";
    cin >> a >> b;

    c = a;
    a = b;
    b = c;

    cout << "Після обміну:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
