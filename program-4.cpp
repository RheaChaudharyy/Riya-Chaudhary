#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    // Sample input list
    vector<int> numbers = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};

    // We'll use a map to store the counts for numbers 1 to 9
    map<int, int> countMap;

    // Initialize map with 0 for keys 1 to 9
    for (int i = 1; i <= 9; i++) {
        countMap[i] = 0;
    }

    // Check divisibility
    for (int num : numbers) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) {
                countMap[i]++;
            }
        }
    }

    // Print results in desired format
    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ":" << countMap[i];
        if (i != 9) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}
