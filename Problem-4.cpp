#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    map<int, int> multiplesCount;

    for (int i = 1; i <= 9; i++) {
        multiplesCount[i] = 0;
    }

    for (int i = 1; i <= 9; i++) {
        for (int num : numbers) {
            if (num % i == 0) {
                multiplesCount[i]++;
            }
        }
    }

    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << multiplesCount[i];
        if (i < 9) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
