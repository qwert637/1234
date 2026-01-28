#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Введіть два числа: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Після обміну:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}