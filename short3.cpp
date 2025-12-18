Ye last 
Short 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, value;
    vector<int> v;

    cout << "Enter number of elements: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> value;
        v.push_back(value);
    }

    int max = v[0];
    int min = v[0];

    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max)
            max = v[i];
        if (v[i] < min)
            min = v[i];
    }

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
