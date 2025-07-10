#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a % 2 == 0) {
        a -= 1;
    }

    int num = 1;
    for (int i = 0; i < a; i++) {
        cout << num;
        if (i < a - 1) {
            cout << ", ";
        }
        num += 2;
    }

    cout << endl;
    return 0;
}
