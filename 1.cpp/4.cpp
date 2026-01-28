#include <iostream>
using namespace std;

int main() {
    cout << "Число\tКвадрат\t       Куб" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << i << "\t"
             << i * i << "\t\t"
             << i * i * i << endl;
    }

    return 0;
}