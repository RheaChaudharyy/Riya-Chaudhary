#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int num = 1; // starting with the first odd number
    for (int i = 0; i < a; i++) {
        cout << num;
        if (i != a - 1) {
            cout << ", ";
        }
        num += 2; // move to the next odd number
    }

    cout << endl;
    return 0;
}
