#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Введіть довжину та ширину прямокутника: ";
    cin >> a >> b;

    double area = a * b;

    cout << "Площа прямокутника = " << area << endl;

    return 0;
}