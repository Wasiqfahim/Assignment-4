

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Traditional for loop:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << "\nRange-based for loop:\n";
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
