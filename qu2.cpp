

#include <iostream>
using namespace std;

const int PRODUCTS = 5;
const int DAYS = 7;

void inputSales(int sales[PRODUCTS][DAYS]) {
    for (int i = 0; i < PRODUCTS; i++) {
        cout << "Enter sales for Product " << i + 1 << " for 7 days:\n";
        for (int j = 0; j < DAYS; j++) {
            cin >> sales[i][j];
        }
    }
}
void calculateRevenue(int sales[PRODUCTS][DAYS], int weeklySales[PRODUCTS]) {
    for (int i = 0; i < PRODUCTS; i++) {
        weeklySales[i] = 0;
        for (int j = 0; j < DAYS; j++) {
            weeklySales[i] += sales[i][j];
        }
    }
}

int findMaxProduct(int weeklySales[PRODUCTS]) {
    int maxProduct = 0;
    for (int i = 1; i < PRODUCTS; i++) {
        if (weeklySales[i] > weeklySales[maxProduct]) {
            maxProduct = i;
        }
    }
    return maxProduct;
}
int findBestDay(int sales[PRODUCTS][DAYS]) {
    int bestDay = 0;
    int maxDaySales = 0;

    for (int j = 0; j < DAYS; j++) {
        int dayTotal = 0;
        for (int i = 0; i < PRODUCTS; i++) {
            dayTotal += sales[i][j];
        }

        if (dayTotal > maxDaySales) {
            maxDaySales = dayTotal;
            bestDay = j;
        }
    }
    return bestDay;
}

int main() {
    int sales[PRODUCTS][DAYS];
    int weeklySales[PRODUCTS];

    inputSales(sales);
    calculateRevenue(sales, weeklySales);

    int maxProduct = findMaxProduct(weeklySales);
    int bestDay = findBestDay(sales);

    cout << "\nWeekly Sales of Each Product:\n";
    for (int i = 0; i < PRODUCTS; i++) {
        cout << "Product " << i + 1 << ": " << weeklySales[i] << endl;
    }

    cout << "\nProduct with highest weekly sales: Product " << maxProduct + 1 << endl;
    cout << "Best sales day overall: Day " << bestDay + 1 << endl;

    return 0;
}
