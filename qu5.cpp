Ye 5th wali slide 
Rotate an image 
#include <iostream>
using namespace std;

int main() {
    int m = 4, n = 4;

    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int rotated[4][4];

    // Rotate 90 degrees counter-clockwise
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rotated[i][j] = a[j][n - 1 - i];
        }
    }

    // Display result
    cout << "Rotated Image:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
