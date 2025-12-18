

#include <iostream>
using namespace std;

const int DAYS = 7;
const int TIMES = 4;

void inputTemps(int temp[DAYS][TIMES]) {
    for (int i = 0; i < DAYS; i++) {
        cout << "Enter temperatures for Day " << i + 1 <<":"<<endl;
        for (int j = 0; j < TIMES; j++) {
            cin >> temp[i][j];
        }
    }
}
void findHighLow(int temp[DAYS][TIMES], int &highest, int &lowest) {
    highest = temp[0][0];
    lowest = temp[0][0];

    for (int i = 0; i < DAYS; i++) {
        for (int j = 0; j < TIMES; j++) {
            if (temp[i][j] > highest)
                highest = temp[i][j];
            if (temp[i][j] < lowest)
                lowest = temp[i][j];
        }
    }
}
void dailyAverage(int temp[DAYS][TIMES], float avg[DAYS]) {
    for (int i = 0; i < DAYS; i++) {
        int sum = 0;
        for (int j = 0; j < TIMES; j++) {
            sum += temp[i][j];
        }
        avg[i] = sum / 4.0;
    }
}
void display(int temp[DAYS][TIMES], float avg[DAYS], int highest, int lowest) {
    cout << "\nDay\tT1\tT2\tT3\tT4\tAverage\n";
    for (int i = 0; i < DAYS; i++) {
        cout << i + 1 << "\t";
        for (int j = 0; j < TIMES; j++) {
            cout << temp[i][j] << "\t";
        }
        cout << avg[i] << endl;
    }

    cout << "\nHighest temperature of week: " << highest << endl;
    cout << "Lowest temperature of week: " << lowest << endl;
}

int main() {
    int temperature[DAYS][TIMES];
    float average[DAYS];
    int high, low;

    inputTemps(temperature);
    findHighLow(temperature, high, low);
    dailyAverage(temperature, average);
    display(temperature, average, high, low);

    return 0;
}
