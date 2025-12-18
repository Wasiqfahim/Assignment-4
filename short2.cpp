#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, value;
    vector<int> v;

    cout << "Enter number of elements: ";
    cin >> N;

    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) {
        cin >> value;
        v.push_back(value);
    }

    cout << "You entered:\n";
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
