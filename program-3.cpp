#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    if (a == 1 || a == 2) {
        cout << "1";
    } else {
        int count = 0;
        int num = 1;
        while (count < a) {
            cout << num;
            count++;
            num += 2;
            if (count < a) {
                cout << ", ";
            }
        }
    }

    cout << endl;
    return 0;
}
